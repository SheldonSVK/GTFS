#include "../include/Parser.hpp"

string GetString(string &str)
{

    if (str.length() == 0)
        return str;

    while (isspace(str[0]))
    {
        str = str.substr(1, str.length() - 1);
        if (str.length() == 0)
            return str;
    }

    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '"')
        {
            for (int j = i + 1; j < str.length(); j++)
                if (str[j] == '"')
                {
                    str = str.substr(j + 2, str.length() - 1);
                    return temp;
                }
                else
                    temp += str[j];
        }
        if (str[i] == ',' || i + 1 == str.length())
        {
            str = str.substr(i + 1, str.length() - 1);
            return temp;
        }
        else
            temp += str[i];
    }
}

int *GetIndex(string field[], int size, string str)
{
    int *index = new int[size];
    int indextemp = 0;
    for (int i = 0; i < size; i++)
        index[i] = -1;
    for (int i = 0; i < size; i++)
    {
        string temp = GetString(str);
        for (int j = 0; j < size; j++)
            if (temp == field[j])
            {
                index[indextemp] = j;
                break;
            }
        indextemp++;
    }

    return index;
}

/*
Case:
    0 AgencyID;
    1 Name;
    2 URL;
    3 TimeZone;
    4 Lang;
    5 Phone;
    6 FareURL;
    7 Email;

*/
vector<Agency *> ImportAgency(string path)
{
    path += "agency.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"agency_id", "agency_name", "agency_url", "agency_timezone", "agency_lang", "agency_phone", "agency_fare_url", "agency_email"};
    int size = 8;
    vector<Agency *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string AgencyID, AgencyName, AgencyURL, AgencyTimezone, AgencyLang, AgencyPhone, AgencyFareURL, AgencyEmail;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                AgencyID = temp;
                break;
            case 1:
                AgencyName = temp;
                break;
            case 2:
                AgencyURL = temp;
                break;
            case 3:
                AgencyTimezone = temp;
                break;
            case 4:
                AgencyLang = temp;
                break;
            case 5:
                AgencyPhone = temp;
                break;
            case 6:
                AgencyFareURL = temp;
                break;
            case 7:
                AgencyEmail = temp;
                break;
            default:
                break;
            }
        }
        Agency *agency = new Agency(AgencyID, AgencyName, AgencyURL, AgencyTimezone, AgencyLang, AgencyPhone, AgencyFareURL, AgencyEmail);
        feed.push_back(agency);
    }
    delete[] index;
    return feed;
}

/*
case:
    0 ServiceID;
    1 Monday;
    2 Tuesday;
    3 Wednesday;
    4 Thursday;
    5 Friday;
    6 Saturday;
    7 Sunday;
    8 StartDate;
    9 EndDate;

*/
vector<Calendar *> ImportCalendar(string path)
{
    path += "calendar.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"service_id", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday", "start_date", "end_date"};
    int size = 10;
    vector<Calendar *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string ServiceID, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, StartDate, EndDate;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                ServiceID = temp;
                break;
            case 1:
                Monday = temp;
                break;
            case 2:
                Tuesday = temp;
                break;
            case 3:
                Wednesday = temp;
                break;
            case 4:
                Thursday = temp;
                break;
            case 5:
                Friday = temp;
                break;
            case 6:
                Saturday = temp;
                break;
            case 7:
                Sunday = temp;
                break;
            case 8:
                StartDate = temp;
                break;
            case 9:
                EndDate = temp;
            default:
                break;
            }
        }
        Calendar *calendar = new Calendar(ServiceID, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, StartDate, EndDate);
        feed.push_back(calendar);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 ServiceID;
    1 Date;
    2 ExceptionType;
*/
vector<CalendarDates *> ImportCaledarDates(string path)
{
    path += "calendar_dates.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"service_id", "date", "exception_type"};
    int size = 3;
    vector<CalendarDates *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string SerivceID, Date, ExceptionType;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                SerivceID = temp;
                break;
            case 1:
                Date = temp;
                break;
            case 2:
                ExceptionType = temp;
                break;
            default:
                break;
            }
        }
        CalendarDates *calendar = new CalendarDates(SerivceID, Date, ExceptionType);
        feed.push_back(calendar);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 FareID;
    1 Price;
    2 CurrencyType;
    3 PaymentMethod;
    4 Transfers;
    5 AgencyID;
    6 TransferDuration;
*/

vector<FareAttributes *> ImportFareAttributes(string path)
{
    path += "fare_attributes.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"fare_id", "price", "currency_type", "payment_method", "transfers", "agency_id", "transfer_duration"};
    int size = 7;
    vector<FareAttributes *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string FareID, Price, CurrencyType, PaymentMethod, Transfers, AgencyID, TransferDuration;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                FareID = temp;
                break;
            case 1:
                Price = temp;
                break;
            case 2:
                CurrencyType = temp;
                break;
            case 3:
                PaymentMethod = temp;
                break;
            case 4:
                Transfers = temp;
                break;
            case 5:
                AgencyID = temp;
                break;
            case 6:
                TransferDuration = temp;
                break;
            default:
                break;
            }
        }
        FareAttributes *fare = new FareAttributes(FareID, Price, CurrencyType, PaymentMethod, Transfers, AgencyID, TransferDuration);
        feed.push_back(fare);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 FareID;
    1 RouteID;
    2 OriginID;
    3 DestinationID;
    4 ContainsID;
*/

vector<FareRules *> ImportFareRules(string path)
{
    path += "fare_rules.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"fare_id", "route_id", "origin_id", "destination_id", "contains_id"};
    int size = 5;
    vector<FareRules *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string FareID, RouteID, OriginID, DestinationID, ContainsID;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                FareID = temp;
                break;
            case 1:
                RouteID = temp;
                break;
            case 2:
                OriginID = temp;
                break;
            case 3:
                DestinationID = temp;
                break;
            case 4:
                ContainsID = temp;
                break;
            default:
                break;
            }
        }
        FareRules *fare = new FareRules(FareID, RouteID, OriginID, DestinationID, ContainsID);
        feed.push_back(fare);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 FeedPublisherName;
    1 FeedPublisherURL;
    2 FeedLang;
    3 FeedStartDate;
    4 FeedEndDate;
    5 FeedVersion;
    6 FeedContactEmail;
    7 FeedContactURL;
*/

vector<FeedInfo *> ImportFeedInfo(string path)
{
    path += "feed_info.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"feed_publisher_name", "feed_publisher_url", "feed_lang", "feed_start_date", "feed_end_date", "feed_version", "feed_contact_email", "feed_contact_url"};
    int size = 8;
    vector<FeedInfo *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string Name, URL, Lang, StartDate, EndDate, Version, Email, ContactURL;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                Name = temp;
                break;
            case 1:
                URL = temp;
                break;
            case 2:
                Lang = temp;
                break;
            case 3:
                StartDate = temp;
                break;
            case 4:
                EndDate = temp;
                break;
            case 5:
                Version = temp;
                break;
            case 6:
                Email = temp;
                break;
            case 7:
                ContactURL = temp;
                break;
            default:
                break;
            }
        }
        FeedInfo *info = new FeedInfo(Name, URL, Lang, StartDate, EndDate, Version, Email, ContactURL);
        feed.push_back(info);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 TripID;
    1 StartTime;
    2 EndTime;
    3 HeadwaySecs;
    4 ExactTimes;
*/

vector<Frequencies *> ImportFrequencies(string path)
{
    path += "frequencies.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"trip_id", "start_time", "end_time", "headway_secs", "exact_times"};
    int size = 5;
    vector<Frequencies *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string TripID, StartTime, Endtime, Secs, Times;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                TripID = temp;
                break;
            case 1:
                StartTime = temp;
                break;
            case 2:
                Endtime = temp;
                break;
            case 3:
                Secs = temp;
                break;
            case 4:
                Times = temp;
                break;
            default:
                break;
            }
        }
        Frequencies *frequencies = new Frequencies(TripID, StartTime, Endtime, Secs, Times);
        feed.push_back(frequencies);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 RouteID;
    1 AgencyID;
    2 ShortName;
    3 LongName;
    4 Desc;
    5 Type;
    6 URL;
    7 Color;
    8 TextColor;
    9 SortOrder;
*/

vector<Routes *> ImportRoutes(string path)
{
    path += "routes.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"route_id", "agency_id", "route_short_name", "route_long_name", "route_desc", "route_type", "route_url", "route_color", "route_text_color", "route_sort_order"};
    int size = 10;
    vector<Routes *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string RouteID, AgencyID, ShortName, LogName, Desc, Type, URL, RouteColor, textColor, SortOrder;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                RouteID = temp;
                break;
            case 1:
                AgencyID = temp;
                break;
            case 2:
                ShortName = temp;
                break;
            case 3:
                LogName = temp;
                break;
            case 4:
                Desc = temp;
                break;
            case 5:
                Type = temp;
                break;
            case 6:
                URL = temp;
                break;
            case 7:
                RouteColor = temp;
                break;
            case 8:
                textColor = temp;
                break;
            case 9:
                SortOrder = temp;
                break;
            default:
                break;
            }
        }
        Routes *routes = new Routes(RouteID, AgencyID, ShortName, LogName, Desc, Type, URL, RouteColor, textColor, SortOrder);
        feed.push_back(routes);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 ShapeID;
    1 ShapePtLat;
    2 ShapePtLon;
    3 ShapePtSequence;
    4 ShapeDistTraveled;
*/

vector<Shapes *> ImportShapes(string path)
{
    path += "shapes.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"shape_id", "shape_pt_lat", "shape_pt_lon", "shape_pt_sequence", "shape_dist_traveled"};
    int size = 5;
    vector<Shapes *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string ShapesID, PTLat, PTLon, PTSequence, DistTraveled;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                ShapesID = temp;
                break;
            case 1:
                PTLat = temp;
                break;
            case 2:
                PTLon = temp;
                break;
            case 3:
                PTSequence = temp;
                break;
            case 4:
                DistTraveled = temp;
                break;
            default:
                break;
            }
        }
        Shapes *shapes = new Shapes(ShapesID, PTLat, PTLon, PTSequence, DistTraveled);
        feed.push_back(shapes);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 StopID;
    1 Code;
    2 Name;
    3 Desc;
    4 Lat;
    5 Lon;
    6 ZoneID;
    7 URL;
    8 LocationType;
    9 ParentStation;
    10 StopTimeZone;
    11 Boarding;
*/

vector<Stops *> ImportStops(string path)
{
    path += "stops.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"stop_id", "stop_code", "stop_name", "stop_desc", "stop_lat", "stop_lon", "zone_id", "stop_url", "location_type", "parent_station", "stop_timezone", "wheelchair_boarding"};
    int size = 12;
    vector<Stops *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string StopID, Code, Name, Desc, Lat, Lon, ZoneID, URL, LocationType, ParentStation, StopTieZone, Boarding;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                StopID = temp;
                break;
            case 1:
                Code = temp;
                break;
            case 2:
                Name = temp;
                break;
            case 3:
                Desc = temp;
                break;
            case 4:
                Lat = temp;
                break;
            case 5:
                Lon = temp;
                break;
            case 6:
                ZoneID = temp;
                break;
            case 7:
                URL = temp;
                break;
            case 8:
                LocationType = temp;
                break;
            case 9:
                ParentStation = temp;
                break;
            case 10:
                StopTieZone = temp;
                break;
            case 11:
                Boarding = temp;
                break;
            default:
                break;
            }
        }
        Stops *stops = new Stops(StopID, Code, Name, Desc, Lat, Lon, ZoneID, URL, LocationType, ParentStation, StopTieZone, Boarding);
        feed.push_back(stops);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 TripID;
    1 ArrivalTime;
    2 DepartureTime;
    3 StopID;
    4 StopSequence;
    5 StopHeadsign;
    6 PickupType;
    7 DropOffType;
    8 ShapeDistTraveled;
    9 Timepoint;
*/

vector<StopTimes *> ImportStopTimes(string path)
{
    path += "stop_times.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"trip_id", "arrival_time", "departure_time", "stop_id", "stop_sequence", "stop_headsign", "pickup_type", "drop_off_type", "shape_dist_traveled", "timepoint"};
    int size = 10;
    vector<StopTimes *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string TripID, Arrival, Departure, StopID, Sequence, Headsign, PickupType, DropOffType, ShapeDist, timepoint;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                TripID = temp;
                break;
            case 1:
                Arrival = temp;
                break;
            case 2:
                Departure = temp;
                break;
            case 3:
                StopID = temp;
                break;
            case 4:
                Sequence = temp;
                break;
            case 5:
                Headsign = temp;
                break;
            case 6:
                PickupType = temp;
                break;
            case 7:
                DropOffType = temp;
                break;
            case 8:
                ShapeDist = temp;
                break;
            case 9:
                timepoint = temp;
                break;
            default:
                break;
            }
        }
        StopTimes *stops = new StopTimes(TripID, Arrival, Departure, StopID, Sequence, Headsign, PickupType, DropOffType, ShapeDist, timepoint);
        feed.push_back(stops);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 FromStopID;
    1 ToStopID;
    2 TransferType;
    3 MinTransferTime;
*/

vector<Transfers *> ImportTransfers(string path)
{
    path += "transfers.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"from_stop_id", "to_stop_id", "transfer_type", "min_transfer_time"};
    int size = 4;
    vector<Transfers *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string From, To, Type, Time;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                From = temp;
                break;
            case 1:
                To = temp;
                break;
            case 2:
                Type = temp;
                break;
            case 3:
                Time = temp;
                break;
            default:
                break;
            }
        }
        Transfers *transfers = new Transfers(From, To, Type, Time);
        feed.push_back(transfers);
    }
    delete[] index;
    return feed;
}

/*
    case:
    0 RouteID;
    1 ServiceID;
    2 TripID;
    3 TripHeadsign;
    4 TripShortName;
    5 DirectionID;
    6 BlockID;
    7 ShapeID;
    8 WheelchairAccessible;
    9 BikesAllowed;
*/

vector<Trips *> ImportTrips(string path)
{
    path += "trips.txt";
    ifstream file(path);
    string str;
    getline(file, str);
    string field[] = {"route_id", "service_id", "trip_id", "trip_headsign", "trip_short_name", "direction_id", "block_id", "shape_id", "wheelchair_accessible", "bikes_allowed"};
    int size = 10;
    vector<Trips *> feed;
    int *index = GetIndex(field, size, str);
    while (getline(file, str))
    {
        string RouteID, ServiceID, TripID, TripHeadsign, TripShortName, Direction, Block, Shape, Wheel, Bikes;
        for (int i = 0; i < size; i++)
        {
            string temp = GetString(str);
            switch (index[i])
            {
            case 0:
                RouteID = temp;
                break;
            case 1:
                ServiceID = temp;
                break;
            case 2:
                TripID = temp;
                break;
            case 3:
                TripHeadsign = temp;
                break;
            case 4:
                TripShortName = temp;
                break;
            case 5:
                Direction = temp;
                break;
            case 6:
                Block = temp;
                break;
            case 7:
                Shape = temp;
                break;
            case 8:
                Wheel = temp;
                break;
            case 9:
                Bikes = temp;
                break;
            default:
                break;
            }
        }
        Trips *trips = new Trips(RouteID, ServiceID, TripID, TripHeadsign, TripShortName, Direction, Block, Shape, Wheel, Bikes);
        feed.push_back(trips);
    }
    delete[] index;
    return feed;
}
