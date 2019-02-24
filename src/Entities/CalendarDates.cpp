#include <string>

using namespace std;

class CalendarDates
{
private:
  string ServiceID;
  string Date;
  string ExceptionType;

public:
  CalendarDates();
  CalendarDates(const string &serviceid, const string &date, const string &exceptiontype);
  ~CalendarDates();

  //Gets
  string GetServiceID() { return this->ServiceID; }
  string GetDate() { return this->Date; }
  string GetExceptionType() { return this->ExceptionType; }

  //Sets
  void SetServiceID(const string &serviceid) { this->ServiceID = serviceid; }
  void SetDate(const string &date) { this->Date = date; }
  void SetExceptionType(const string &exceptiontype) { this->ExceptionType = exceptiontype; }
};

CalendarDates::CalendarDates()
{
  this->ServiceID.clear();
  this->Date.clear();
  this->ExceptionType.clear();
}

CalendarDates::CalendarDates(const string &serviceid, const string &date, const string &exceptiontype)
{
  SetServiceID(serviceid);
  SetDate(date);
  SetExceptionType(exceptiontype);
}

CalendarDates::~CalendarDates()
{
}
