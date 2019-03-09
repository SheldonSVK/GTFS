#include "../include/Graph.hpp"

Edge::Edge(Vertices *from, Vertices *to, StopTimes *fromstoptimes, StopTimes *tostoptimes)
{
    this->SetVerticesFrom(from);
    this->SetVerticesTo(to);
    this->SetStopTimesFrom(fromstoptimes);
    this->SetStopTimesTo(tostoptimes);
    this->SetArrival(new Time(fromstoptimes->GetDepartureTime()));
    this->SetDeparture(new Time(tostoptimes->GetArrivalTime()));
    this->seconds = this->Departure->TotalSeconds() - this->Arrival->TotalSeconds();
}

int Edge::Weight(Time *departure)
{
    int temp = this->Arrival->TotalSeconds() - departure->TotalSeconds();
    return this->seconds + temp;
}

Edge::~Edge()
{
    delete this->Arrival;
    delete this->Departure;
}

Vertices::Vertices(Stops *stop)
{
    this->SetVericesStop(stop);
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

            Edge *edge = new Edge(from, to, stop[j], stop[j + 1]);
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