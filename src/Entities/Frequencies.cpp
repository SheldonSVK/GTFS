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
    Frequencies(string tripid, string starttime, string endtime, string headwaysecs, string exacttimes);
    ~Frequencies();

    //Gets
    string GetTripID() { return this->TripID; }
    string GetStartTime() { return this->StartTime; }
    string GetEndTime() { return this->EndTime; }
    string GetHeadwaySecs() { return this->HeadwaySecs; }
    string GetExactTimes() { return this->ExactTimes; }

    //Sets
    void SetTripID(string tripid) { this->TripID = tripid; }
    void SetStartTime(string starttime) { this->StartTime = starttime; }
    void SetEndTime(string endtime) { this->EndTime = endtime; }
    void SetHeadwaySecs(string headwaysecs) { this->HeadwaySecs = headwaysecs; }
    void SetExactTimes(string exacttimes) { this->ExactTimes = exacttimes; }
};

Frequencies::Frequencies(/* args */)
{
    this->TripID.clear();
    this->StartTime.clear();
    this->EndTime.clear();
    this->HeadwaySecs.clear();
    this->ExactTimes.clear();
}

Frequencies::Frequencies(string tripid, string starttime, string endtime, string headwaysecs, string exacttimes)
{
    this->TripID = tripid;
    this->StartTime = starttime;
    this->EndTime = endtime;
    this->HeadwaySecs = headwaysecs;
    this->ExactTimes = exacttimes;
}

Frequencies::~Frequencies()
{
}
