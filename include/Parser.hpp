#include <vector>
#include <fstream>

#include "Entities.hpp"

string GetString(string &str);

int *GetIndex(string field[], int size, string str);

vector<Agency *> ImportAgency(string path);

vector<Calendar *> ImportCalendar(string path);

vector<CalendarDates *> ImportCaledarDates(string path);

vector<FareAttributes *> ImportFareAttributes(string path);

vector<FareRules *> ImportFareRules(string path);

vector<FeedInfo *> ImportFeedInfo(string path);

vector<Frequencies *> ImportFrequencies(string path);

vector<Routes *> ImportRoutes(string path);

vector<Shapes *> ImportShapes(string path);

vector<Stops *> ImportStops(string path);

vector<StopTimes *> ImportStopTimes(string path);

vector<Transfers *> ImportTransfers(string path);

vector<Trips *> ImportTrips(string path);