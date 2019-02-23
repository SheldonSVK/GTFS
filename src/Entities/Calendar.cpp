#include <string>

using namespace std;

class Calendar
{
  private:
    string ServiceID;
    string Monday;
    string Tuesday;
    string Wednesday;
    string Thursday;
    string Friday;
    string Saturday;
    string Sunday;
    string StartDate;
    string EndDate;

  public:
    Calendar();
    Calendar(string serviceid, string monday, string tuesday, string wednesday, string thursday, string friday, string saturday, string sunday, string stardate, string enddate);
    ~Calendar();

    //Gets
    string GetServiceID() { return this->ServiceID; }
    string GetMonday() { return this->Tuesday; }
    string GetTuesday() { return this->Tuesday; }
    string GetWednesday() { return this->Wednesday; }
    string GetThursday() { return this->Thursday; }
    string GetFriday() { return this->Friday; }
    string GetSaturday() { return this->Saturday; }
    string GetSunday() { return this->Sunday; }
    string GetStartDate() { return this->StartDate; }
    string GetEndDate() { return this->EndDate; }

    //Sets
    void SetServiceID(string serviceid) { this->ServiceID = serviceid; }
    void SetMonday(string monday) { this->Monday = monday; }
    void SetTuesday(string tuesday) { this->Tuesday = tuesday; }
    void SetWednesday(string wednesday) { this->Wednesday = wednesday; }
    void SetThursday(string thursday) { this->Thursday = thursday; }
    void SetFriday(string friday) { this->Friday = friday; }
    void SetSaturday(string saturday) { this->Saturday = saturday; }
    void SetSunday(string sunday) { this->Sunday = sunday; }
    void SetStartDate(string startdate) { this->StartDate = startdate; }
    void SetEndDate(string enddate) { this->EndDate; }
};

Calendar::Calendar()
{
    this->ServiceID.clear();
    this->Monday.clear();
    this->Tuesday.clear();
    this->Wednesday.clear();
    this->Thursday.clear();
    this->Friday.clear();
    this->Saturday.clear();
    this->Sunday.clear();
    this->StartDate.clear();
    this->EndDate.clear();
}

Calendar::Calendar(string serviceid, string monday, string tuesday, string wednesday, string thursday, string friday, string saturday, string sunday, string stardate, string enddate)
{
    this->ServiceID = serviceid;
    this->Monday = monday;
    this->Tuesday = tuesday;
    this->Wednesday = wednesday;
    this->Thursday = thursday;
    this->Friday = friday;
    this->Saturday = saturday;
    this->Sunday = sunday;
    this->StartDate = stardate;
    this->EndDate = enddate;
}

Calendar::~Calendar()
{
}
