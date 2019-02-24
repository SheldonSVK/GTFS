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
  Calendar(const string &serviceid, const string &monday, const string &tuesday, const string &wednesday, const string &thursday, const string &friday, const string &saturday, const string &sunday, const string &stardate, const string &enddate);
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
  void SetServiceID(const string &serviceid) { this->ServiceID = serviceid; }
  void SetMonday(const string &monday) { this->Monday = monday; }
  void SetTuesday(const string &tuesday) { this->Tuesday = tuesday; }
  void SetWednesday(const string &wednesday) { this->Wednesday = wednesday; }
  void SetThursday(const string &thursday) { this->Thursday = thursday; }
  void SetFriday(const string &friday) { this->Friday = friday; }
  void SetSaturday(const string &saturday) { this->Saturday = saturday; }
  void SetSunday(const string &sunday) { this->Sunday = sunday; }
  void SetStartDate(const string &startdate) { this->StartDate = startdate; }
  void SetEndDate(const string &enddate) { this->EndDate; }
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

Calendar::Calendar(const string &serviceid, const string &monday, const string &tuesday, const string &wednesday, const string &thursday, const string &friday, const string &saturday, const string &sunday, const string &stardate, const string &enddate)
{
  SetServiceID(serviceid);
  SetMonday(monday);
  SetTuesday(tuesday);
  SetWednesday(wednesday);
  SetThursday(thursday);
  SetFriday(friday);
  SetSaturday(saturday);
  SetSunday(sunday);
  SetStartDate(stardate);
  SetEndDate(enddate);
}

Calendar::~Calendar()
{
}
