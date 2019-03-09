#include "../include/Feed.hpp"

Feed::Feed(const string &path)
{
    this->SetAgencyFeed(ImportAgency(path));
    this->SetCalendarFeed(ImportCalendar(path));
    this->SetCalendarDatesFeed(ImportCaledarDates(path));
    this->SetFareAttributesFeed(ImportFareAttributes(path));
    this->SetFareRulesFeed(ImportFareRules(path));
    this->SetFeedInfoFeed(ImportFeedInfo(path));
    this->SetFrequenciesFeed(ImportFrequencies(path));
    this->SetRoutesFeed(ImportRoutes(path));
    this->SetShapesFeed(ImportShapes(path));
    this->SetStopsFeed(ImportStops(path));
    this->SetStopTimes(ImportStopTimes(path));
    this->SetTransfersFeed(ImportTransfers(path));
    this->SetTrips(ImportTrips(path));
}

Feed::~Feed()
{
    //Delete agency
    for (vector<Agency *>::iterator it = this->AgencyFeed.begin(); it != this->AgencyFeed.end(); ++it)
        delete (*it);
    this->AgencyFeed.clear();

    //Delete calendar
    for (vector<Calendar *>::iterator it = this->CalendarFeed.begin(); it != this->CalendarFeed.end(); ++it)
        delete (*it);
    this->CalendarFeed.clear();

    //Delete calendar dates
    for (vector<CalendarDates *>::iterator it = this->CalendarDatesFeed.begin(); it != this->CalendarDatesFeed.end(); ++it)
        delete (*it);
    this->CalendarDatesFeed.clear();

    //Delete fare attributes
    for (vector<FareAttributes *>::iterator it = this->FareAttributesFeed.begin(); it != this->FareAttributesFeed.end(); ++it)
        delete (*it);
    this->FareAttributesFeed.clear();

    //Dlete fare rules
    for (vector<FareRules *>::iterator it = this->FareRulesFeed.begin(); it != this->FareRulesFeed.end(); ++it)
        delete (*it);
    this->FareRulesFeed.clear();

    //delete feed info
    for (vector<FeedInfo *>::iterator it = this->FeedInfoFeed.begin(); it != this->FeedInfoFeed.end(); ++it)
        delete (*it);
    this->FeedInfoFeed.clear();

    //delete frequencies
    for (vector<Frequencies *>::iterator it = this->FrequenciesFeed.begin(); it != this->FrequenciesFeed.end(); ++it)
        delete (*it);
    this->FrequenciesFeed.clear();

    //Delete routes
    for (vector<Routes *>::iterator it = this->RoutesFeed.begin(); it != this->RoutesFeed.end(); ++it)
        delete (*it);
    this->RoutesFeed.clear();

    //delete shapes
    for (vector<Shapes *>::iterator it = this->ShapesFeed.begin(); it != this->ShapesFeed.end(); ++it)
        delete (*it);
    this->ShapesFeed.clear();

    //delete stops
    for (vector<Stops *>::iterator it = this->StopsFeed.begin(); it != this->StopsFeed.end(); ++it)
        delete (*it);
    this->StopsFeed.clear();

    //delete stop times
    for (vector<StopTimes *>::iterator it = this->StopTimesFeed.begin(); it != this->StopTimesFeed.end(); ++it)
        delete (*it);

    //delete transfers
    for (vector<Transfers *>::iterator it = this->TransfersFeed.begin(); it != this->TransfersFeed.end(); ++it)
        delete (*it);
    this->TransfersFeed.clear();

    //delete trips
    for (vector<Trips *>::iterator it = this->TripsFeed.begin(); it != this->TripsFeed.end(); ++it)
        delete (*it);
    this->TripsFeed.clear();
}
