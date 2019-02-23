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
    CalendarDates(string serviceid, string date, string exceptiontype);
    ~CalendarDates();

    //Gets
    string GetServiceID() { return this->ServiceID; }
    string GetDate() { return this->Date; }
    string GetExceptionType() { return this->ExceptionType; }

    //Sets
    void SetServiceID(string serviceid) { this->ServiceID = serviceid; }
    void SetDate(string date) { this->Date = date; }
    void SetExceptionType(string exceptiontype) { this->ExceptionType = exceptiontype; }
};

CalendarDates::CalendarDates()
{
    this->ServiceID.clear();
    this->Date.clear();
    this->ExceptionType.clear();
}

CalendarDates::CalendarDates(string serviceid, string date, string exceptiontype)
{
    this->ServiceID = serviceid;
    this->Date = date;
    this->ExceptionType = exceptiontype;
}

CalendarDates::~CalendarDates()
{
}
