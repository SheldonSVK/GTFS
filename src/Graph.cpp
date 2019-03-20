#include "../include/Graph.hpp"

Edge::Edge(Vertices *from, Vertices *to, StopTimes *fromstoptimes, StopTimes *tostoptimes, Trips *temptrip, Routes *temproutes, Calendar *tempcalendar, vector<CalendarDates *> tempcalendardates)
{
    this->SetVerticesFrom(from);
    this->SetVerticesTo(to);
    this->SetStopTimesFrom(fromstoptimes);
    this->SetStopTimesTo(tostoptimes);
    this->SetArrival(Time(fromstoptimes->GetDepartureTime()));
    this->SetDeparture(Time(tostoptimes->GetArrivalTime()));
    this->SetTrips(temptrip);
    this->SetRoute(temproutes);
    this->SetDays(tempcalendar);
    this->SetCalendarDates(tempcalendardates);
}

bool Edge::CheckDay(Date date)
{
    if (this->Days == nullptr)
        return false;
    switch (date.GetDayOfWeek())
    {
    case Monday:
        if (this->Days->GetMonday() == "1")
            return true;
        return false;
    case Tuesday:
        if (this->Days->GetThursday() == "1")
            return true;
        return false;
    case Wednesday:
        if (this->Days->GetWednesday() == "1")
            return true;
        return false;
    case Thursday:
        if (this->Days->GetThursday() == "1")
            return true;
        return false;
    case Friday:
        if (this->Days->GetFriday() == "1")
            return true;
        return false;
    case Saturday:
        if (this->Days->GetSaturday() == "1")
            return true;
        return false;
    case Sunday:
        if (this->Days->GetSunday() == "1")
            return true;
        return false;

    default:
        return false;
    }
}

bool Edge::CheckException(Date date)
{
    for (int i = 0; i < this->Exception.size(); i++)
    {
        Date temp(this->Exception[i]->GetDate());
        if (temp == date && this->Exception[i]->GetExceptionType() == "2")
            return false;
    }
    return true;
}
bool Edge::CheckDate(Date date)
{
    for (int i = 0; i < this->Exception.size(); i++)
    {
        Date temp(this->Exception[i]->GetDate());
        if (temp == date && this->Exception[i]->GetExceptionType() == "1")
            return false;
    }
    return true;
}

DateTime Edge::Weight(DateTime start)
{

    Date date = start.GetDate();
    if (start.GetTime() > this->Arrival)
        date.AddDays(1);
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            date = start.GetDate();
            date.AddDays(-1);
            start.SetDate(date);
            return start;
        }
        if (this->CheckDay(date) || this->CheckDate(date))
            if (this->CheckException(date))
                break;
        date.AddDays(1);
    }
    Time temp = Departure;
    int hour = temp.GetHour();
    if (hour > 23)
    {
        hour -= 24;
        date.AddDays(1);
        temp.SetHour(hour);
    }
    return DateTime(date, temp);
}

Vertices::Vertices(Stops *stop)
{
    this->SetVericesStop(stop);
    this->Pilot = nullptr;
    this->Prev = nullptr;
    this->Check = false;
}

Vertices::~Vertices()
{
    for (vector<Edge *>::iterator it = this->VerticesEdges.begin(); it != this->VerticesEdges.end(); ++it)
        delete (*it);
    this->VerticesEdges.clear();
}

Graph::Graph(Feed *feed)
{
    this->CreateVertices(feed->GetStopsFeed());
    vector<StopTimes *> stoptimes = feed->GetStopTimesFeed();
    for (int i = 0; i < stoptimes.size(); i++)
    {
        this->GraphStopTimes[stoptimes[i]->GetTripID()].push_back(stoptimes[i]);
    }

    vector<Edge *> temp = this->CreateEdges(feed);
    this->AddEdgeVertices(temp);
}

Graph::~Graph()
{
    for (pair<const string, Vertices *> &place : this->GraphVertices)
    {
        delete place.second;
        place.second = nullptr;
    }
    this->GraphVertices.clear();
}

void Graph::CreateVertices(vector<Stops *> stops)
{
    this->GraphVertices.clear();
    for (int i = 0; i < stops.size(); i++)
    {
        Vertices *vertices = new Vertices(stops[i]);
        this->GraphVertices.insert(map<std::string, Vertices *>::value_type(vertices->GetVerticesStop()->GetStopID(), vertices));
    }
}

Vertices *Graph::SearchVertices(const string &stopid)
{
    return this->GraphVertices[stopid];
}

vector<Edge *> Graph::CreateEdges(Feed *feed)
{
    vector<Edge *> edges;
    vector<Trips *> trips = feed->GetTripsFeed();

    //Sort routes
    map<string, Routes *> maproutes;
    vector<Routes *> vectorroutes = feed->GetRoutesFeed();
    for (int i = 0; i < vectorroutes.size(); i++)
        maproutes[vectorroutes[i]->GetRouteID()] = vectorroutes[i];

    //Sort calendar
    map<string, Calendar *> mapcalendar;
    vector<Calendar *> vectorcalendar = feed->GetCalendarFeed();
    for (int i = 0; i < vectorcalendar.size(); i++)
        mapcalendar[vectorcalendar[i]->GetServiceID()] = vectorcalendar[i];

    //sort calendar dates
    map<string, vector<CalendarDates *>> mapcalendardates;
    vector<CalendarDates *> vectorcalendars = feed->GetCalendarDatesFeed();
    for (int i = 0; i < vectorcalendars.size(); i++)
        mapcalendardates[vectorcalendars[i]->GetServiceID()].push_back(vectorcalendars[i]);
    for (int i = 0; i < trips.size(); i++)
    {
        vector<StopTimes *> stop = this->SearchStopTimes(trips[i]->GetTripID());
        if (stop.size() == 0 || stop.size() == 1)
            continue;
        stop = SortSequence(stop);
        for (int j = 0; j + 1 < stop.size(); j++)
        {
            Vertices *from = this->SearchVertices(stop[j]->GetStopID());
            Vertices *to = this->SearchVertices(stop[j + 1]->GetStopID());

            Edge *edge = new Edge(from, to, stop[j], stop[j + 1], trips[i], maproutes[trips[i]->GetRouteID()], mapcalendar[trips[i]->GetServiceID()], mapcalendardates[trips[i]->GetServiceID()]);
            edges.push_back(edge);
        }
    }
    return edges;
}

void Graph::AddEdgeVertices(vector<Edge *> edges)
{
    for (int i = 0; i < edges.size(); i++)
    {
        vector<Edge *> temp = edges[i]->GetVerticesFrom()->GetVericesEdges();
        temp.push_back(edges[i]);
        edges[i]->GetVerticesFrom()->SetVerticesEdges(temp);
    }
}

vector<StopTimes *> Graph::SearchStopTimes(string tripid)
{
    return this->GraphStopTimes[tripid];
}

void Graph::SetDistanceMaxLong(DateTime datetime, Vertices *pilot)
{
    Date date = datetime.GetDate();
    date.AddDays(200);
    datetime.SetDate(date);
    for (pair<const string, Vertices *> &place : this->GraphVertices)
    {
        Time temp(1000, 59, 59);
        place.second->SetTime(datetime);
        place.second->SetPrev(nullptr);
        place.second->SetCheck(false);
        place.second->SetPilot(pilot);
    }
}