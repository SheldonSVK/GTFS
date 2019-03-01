#include <vector>
#include <string>

using namespace std;

#include "Entities.hpp"

class Feed
{
private:
  vector<Agency> AgencyFeed;
  vector<Calendar> CalendarFeed;
  vector<CalendarDates> CalendarDatesFeed;
  vector<FareAttributes> FareAttributesFeed;
  vector<FareRules> FareRulesFeed;
  vector<FeedInfo> FeedInfoFeed;
  vector<Frequencies> FrequenciesFeed;
  vector<Routes> RoutesFeed;
  vector<Shapes> ShapesFeed;
  vector<Stops> StopsFeed;
  vector<StopTimes> StopTimesFeed;
  vector<Transfers> TransfersFeed;
  vector<Trips> TripsFeed;

public:
  Feed(string path);
  ~Feed();
};
