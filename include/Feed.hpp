#include "Parser.hpp"

class Feed
{
private:
  vector<Agency *> AgencyFeed;
  vector<Calendar *> CalendarFeed;
  vector<CalendarDates *> CalendarDatesFeed;
  vector<FareAttributes *> FareAttributesFeed;
  vector<FareRules *> FareRulesFeed;
  vector<FeedInfo *> FeedInfoFeed;
  vector<Frequencies *> FrequenciesFeed;
  vector<Routes *> RoutesFeed;
  vector<Shapes *> ShapesFeed;
  vector<Stops *> StopsFeed;
  vector<StopTimes *> StopTimesFeed;
  vector<Transfers *> TransfersFeed;
  vector<Trips *> TripsFeed;

public:
  Feed(string path);
  ~Feed();

  //Gets
  vector<Agency *> GetAgencyFeed() { return this->AgencyFeed; }
  vector<Calendar *> GetCalendarFeed() { return this->CalendarFeed; }
  vector<CalendarDates *> GetCalendarDatesFeed() { return this->CalendarDatesFeed; }
  vector<FareAttributes *> GetFareAttributesFeed() { return this->FareAttributesFeed; }
  vector<FareRules *> GetFareRulesFeed() { return this->FareRulesFeed; }
  vector<FeedInfo *> GetFeedInfoFeed() { return this->FeedInfoFeed; }
  vector<Frequencies *> GetFrequenciesFeed() { return this->FrequenciesFeed; }
  vector<Routes *> GetRoutesFeed() { return this->RoutesFeed; }
  vector<Shapes *> GetShapesFeed() { return this->ShapesFeed; }
  vector<Stops *> GetStopsFeed() { return this->StopsFeed; }
  vector<StopTimes *> GetStopTimesFeed() { return this->StopTimesFeed; }
  vector<Transfers *> GetTransfersFeed() { return this->TransfersFeed; }
  vector<Trips *> GetTripsFeed() { return this->TripsFeed; }

  //Sets
  void SetAgencyFeed(const vector<Agency *> &agencyfeed) { this->AgencyFeed = agencyfeed; }
  void SetCalendarFeed(const vector<Calendar *> &calendarfeed) { this->CalendarFeed = calendarfeed; }
  void SetCalendarDatesFeed(const vector<CalendarDates *> &calendardatesfeed) { this->CalendarDatesFeed = calendardatesfeed; }
  void SetFareAttributesFeed(const vector<FareAttributes *> &fareattributesfeed) { this->FareAttributesFeed = fareattributesfeed; }
  void SetFareRulesFeed(const vector<FareRules *> &farerulesfeed) { this->FareRulesFeed = farerulesfeed; }
  void SetFeedInfoFeed(const vector<FeedInfo *> &feedinfofeed) { this->FeedInfoFeed = feedinfofeed; }
  void SetFrequenciesFeed(const vector<Frequencies *> &frequenciesfeed) { this->FrequenciesFeed = frequenciesfeed; }
  void SetRoutesFeed(const vector<Routes *> &routesfeed) { this->RoutesFeed = routesfeed; }
  void SetShapesFeed(const vector<Shapes *> &shapesfeed) { this->ShapesFeed = shapesfeed; }
  void SetStopsFeed(const vector<Stops *> &stopsfeed) { this->StopsFeed = stopsfeed; }
  void SetStopTimes(const vector<StopTimes *> &stoptimesfeed) { this->StopTimesFeed = stoptimesfeed; }
  void SetTransfersFeed(const vector<Transfers *> &transfersfeed) { this->TransfersFeed = transfersfeed; }
  void SetTrips(const vector<Trips *> &tripsfeed) { this->TripsFeed = tripsfeed; }
};
