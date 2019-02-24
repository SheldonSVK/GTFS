#include <string>

using namespace std;

class Frequencies
{
private:
  string TripID;
  string StartTime;
  string EndTime;
  string HeadwaySecs;
  string ExactTimes;

public:
  Frequencies();
  Frequencies(const string &tripid, const string &starttime, const string &endtime, const string &headwaysecs, const string &exacttimes);
  ~Frequencies();

  //Gets
  string GetTripID() { return this->TripID; }
  string GetStartTime() { return this->StartTime; }
  string GetEndTime() { return this->EndTime; }
  string GetHeadwaySecs() { return this->HeadwaySecs; }
  string GetExactTimes() { return this->ExactTimes; }

  //Sets
  void SetTripID(const string &tripid) { this->TripID = tripid; }
  void SetStartTime(const string &starttime) { this->StartTime = starttime; }
  void SetEndTime(const string &endtime) { this->EndTime = endtime; }
  void SetHeadwaySecs(const string &headwaysecs) { this->HeadwaySecs = headwaysecs; }
  void SetExactTimes(const string &exacttimes) { this->ExactTimes = exacttimes; }
};

Frequencies::Frequencies(/* args */)
{
  this->TripID.clear();
  this->StartTime.clear();
  this->EndTime.clear();
  this->HeadwaySecs.clear();
  this->ExactTimes.clear();
}

Frequencies::Frequencies(const string &tripid, const string &starttime, const string &endtime, const string &headwaysecs, const string &exacttimes)
{
  SetTripID(tripid);
  SetStartTime(starttime);
  SetEndTime(endtime);
  SetHeadwaySecs(headwaysecs);
  SetExactTimes(exacttimes);
}

Frequencies::~Frequencies()
{
}
