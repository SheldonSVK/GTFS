#include <string>
#include <vector>

using namespace std;

class Time
{
private:
  int Hour;
  int Minute;
  int Seconds;
  int GetInt(string &str);

public:
  Time() {}
  Time(int hour, int minute, int seconds);
  explicit Time(string time);

  //Gets
  int GetHour() { return Hour; }
  int GetMinute() { return Minute; }
  int GetSeconds() { return Seconds; }

  //Sets
  void SetHour(int hour) { Hour = hour; }
  void SetMinute(int minute) { Minute = minute; }
  void SetSeconds(int seconds) { Seconds = seconds; }

  int TotalSeconds() { return (Hour * 3600) + (Minute * 60) + Seconds; }
  string ToString() { return (Hour < 10 ? "0" + to_string(Hour) : to_string(Hour)) + ":" + (Minute < 10 ? "0" + to_string(Minute) : to_string(Minute)) + ":" + (Seconds < 10 ? "0" + to_string(Seconds) : to_string(Seconds)); }

  friend bool operator==(const Time &t1, const Time &t2);
  friend bool operator!=(const Time &t1, const Time &t2);
  friend bool operator<(const Time &t1, const Time &t2);
  friend bool operator>(const Time &t1, const Time &t2);
  friend bool operator<=(const Time &t1, const Time &t2);
  friend bool operator>=(const Time &t1, const Time &t2);
  friend Time operator+(Time const &t1, Time const &t2);
  friend Time operator-(Time const &t1, Time const &t2);
};

enum DayOfWeek
{
  Monday,
  Tuesday,
  Wednesday,
  Thursday,
  Friday,
  Saturday,
  Sunday
};

class Date
{
private:
  int Day;
  int Month;
  int Year;
  int GetInt(string &str, int size);

public:
  Date() {}
  Date(int day, int month, int year);
  explicit Date(string date);

  //Gets
  int GetDay() { return this->Day; }
  int GetMonth() { return this->Month; }
  int GetYear() { return this->Year; }

  //Sets
  void SetDay(int day) { this->Day = day; }
  void SetMonth(int month) { this->Month = month; }
  void SetYear(int year) { this->Year = year; }

  int TotalDays();
  DayOfWeek GetDayOfWeek();
  void SetTotalDays(int days);
  void AddDays(int days);
  string ToString() { return to_string(this->Day) + "." + to_string(this->Month) + "." + to_string(this->Year); }

  friend bool operator==(const Date &d1, const Date &d2);
  friend bool operator!=(const Date &d1, const Date &d2);
  friend bool operator<(const Date &d1, const Date &d2);
  friend bool operator>(const Date &d1, const Date &d2);
  friend bool operator<=(const Date &d1, const Date &d2);
  friend bool operator>=(const Date &d1, const Date &d2);
};

class DateTime
{
private:
  Date date;
  Time time;

public:
  DateTime() {}
  DateTime(Date tempdate, Time temptime);

  //Gets
  Date GetDate() { return this->date; }
  Time GetTime() { return this->time; }

  //Sets
  void SetDate(Date temp) { this->date = temp; }
  void SetTime(Time temp) { this->time = temp; }

  string ToString() { return this->date.ToString() + " " + this->time.ToString(); }

  friend bool operator==(const DateTime &d1, const DateTime &d2);
  friend bool operator!=(const DateTime &d1, const DateTime &d2);
  friend bool operator<(const DateTime &d1, const DateTime &d2);
  friend bool operator>(const DateTime &d1, const DateTime &d2);
  friend bool operator<=(const DateTime &d1, const DateTime &d2);
  friend bool operator>=(const DateTime &d1, const DateTime &d2);
};

//Agency class
class Agency
{
private:
  string AgencyID;
  string Name;
  string URL;
  string TimeZone;
  string Lang;
  string Phone;
  string FareURL;
  string Email;

public:
  Agency(const string &agencyid, const string &name, const string &url, const string &timezone, const string &lang, const string &phone, const string &fareurl, const string &email);

  //Getery
  string GetAgencyID() { return this->AgencyID; }
  string GetName() { return this->Name; }
  string GetURL() { return this->URL; }
  string GetTimeZone() { return this->TimeZone; }
  string GetLang() { return this->Lang; }
  string GetPhone() { return this->Phone; }
  string GetFareURL() { return this->FareURL; }
  string GetEmail() { return this->Email; }

  //Settery
  void SetAgencyID(const string &agencyid) { this->AgencyID = agencyid; }
  void SetName(const string &name) { this->Name = name; }
  void SetURL(const string &url) { this->URL = url; }
  void SetTimeZone(const string &timezone) { this->TimeZone = timezone; }
  void SetLang(const string &lang) { this->Lang = lang; }
  void SetPhone(const string &phone) { this->Phone = phone; }
  void SetFareURL(const string &fareurl) { this->FareURL = fareurl; }
  void SetEmail(const string &email) { this->Email = email; }
};

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
  Calendar(const string &serviceid, const string &monday, const string &tuesday, const string &wednesday, const string &thursday, const string &friday, const string &saturday, const string &sunday, const string &stardate, const string &enddate);

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

class CalendarDates
{
private:
  string ServiceID;
  string Date;
  string ExceptionType;

public:
  CalendarDates(const string &serviceid, const string &date, const string &exceptiontype);

  //Gets
  string GetServiceID() { return this->ServiceID; }
  string GetDate() { return this->Date; }
  string GetExceptionType() { return this->ExceptionType; }

  //Sets
  void SetServiceID(const string &serviceid) { this->ServiceID = serviceid; }
  void SetDate(const string &date) { this->Date = date; }
  void SetExceptionType(const string &exceptiontype) { this->ExceptionType = exceptiontype; }
};

class FareAttributes
{
private:
  string FareID;
  string Price;
  string CurrencyType;
  string PaymentMethod;
  string Transfers;
  string AgencyID;
  string TransferDuration;

public:
  FareAttributes(const string &fareid, const string &price, const string &currencytype, const string &paymentmethod, const string &transfers, const string &agencyid, const string &transferduration);

  //Gets
  string GetFareID() { return this->FareID; }
  string GetPrice() { return this->Price; }
  string GetCurrencyType() { return this->CurrencyType; }
  string GetPaymentMethod() { return this->PaymentMethod; }
  string GetTransfers() { return this->Transfers; }
  string GetAgencyID() { return this->AgencyID; }
  string GetTransferDuration() { return this->TransferDuration; }

  //Sets
  void SetFareID(const string &fareid) { this->FareID = fareid; }
  void SetPrice(const string &price) { this->Price = price; }
  void SetCurrencyType(const string &currencytype) { this->CurrencyType = currencytype; }
  void SetPaymentMethod(const string &paymentmethod) { this->PaymentMethod = paymentmethod; }
  void SetTransfers(const string &transfers) { this->Transfers = transfers; }
  void SetAgencyID(const string &agencyid) { this->AgencyID = agencyid; }
  void SetTransferDuration(const string &transferduration) { this->TransferDuration = transferduration; }
};

class FareRules
{
private:
  string FareID;
  string RouteID;
  string OriginID;
  string DestinationID;
  string ContainsID;

public:
  FareRules(const string &fareid, const string &routeid, const string &originid, const string &destinationid, const string &containsid);

  //Gets
  string GetFareID() { return this->FareID; }
  string GetRouteID() { return this->RouteID; }
  string GetOriginID() { return this->OriginID; }
  string GetDestinationID() { return this->DestinationID; }
  string GetContainsID() { return this->ContainsID; }

  //Sets
  void SetFareID(const string &fareid) { this->FareID = fareid; }
  void SetRouteID(const string &routeid) { this->RouteID = routeid; }
  void SetOriginID(const string &originid) { this->OriginID = originid; }
  void SetDestinationID(const string &destinationid) { this->DestinationID = destinationid; }
  void SetContainsID(const string &containsid) { this->ContainsID = containsid; }
};

class FeedInfo
{
private:
  string FeedPublisherName;
  string FeedPublisherURL;
  string FeedLang;
  string FeedStartDate;
  string FeedEndDate;
  string FeedVersion;
  string FeedContactEmail;
  string FeedContactURL;

public:
  FeedInfo(const string &feedpublishername, const string &feedpublisherurl, const string &feedlang, const string &feedstartdate, const string &feedenddate, const string &feedversion, const string &feedcontactemail, const string &feedcontacturl);

  //Gets
  string GetFeedPublisherName() { return this->FeedPublisherName; }
  string GetFeedPublisherURL() { return this->FeedPublisherURL; }
  string GetFeedLang() { return this->FeedLang; }
  string GetFeedStartDate() { return this->FeedStartDate; }
  string GetFeedEndDate() { return this->FeedEndDate; }
  string GetFeedVersion() { return this->FeedVersion; }
  string GetFeedContactEmail() { return this->FeedContactEmail; }
  string GetFeedContactURL() { return this->FeedContactURL; }

  //Sets
  void SetFeedPublisherName(const string &feedpublishername) { this->FeedPublisherName = feedpublishername; }
  void SetFeedPublisherURL(const string &feedpublisherurl) { this->FeedPublisherURL = feedpublisherurl; }
  void SetFeedLang(const string &feedlang) { this->FeedLang = feedlang; }
  void SetFeedStartDate(const string &feedstartdate) { this->FeedStartDate = feedstartdate; }
  void SetFeedEndDate(const string &feedenddate) { this->FeedEndDate = feedenddate; }
  void SetFeedVersion(const string &feedversion) { this->FeedVersion = feedversion; }
  void SetFeedContactEmail(const string &feedcontactemail) { this->FeedContactEmail = feedcontactemail; }
  void SetFeedContactURL(const string &feedcontacturl) { this->FeedContactURL = feedcontacturl; }
};

class Frequencies
{
private:
  string TripID;
  string StartTime;
  string EndTime;
  string HeadwaySecs;
  string ExactTimes;

public:
  Frequencies(const string &tripid, const string &starttime, const string &endtime, const string &headwaysecs, const string &exacttimes);

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

class Routes
{
private:
  string RouteID;
  string AgencyID;
  string ShortName;
  string LongName;
  string Desc;
  string Type;
  string URL;
  string Color;
  string TextColor;
  string SortOrder;

public:
  Routes(const string &routeid, const string &agencyid, const string &shortname, const string &longname, const string &desc, const string &type, const string &url, const string &color, const string &textcolor, const string &sortorder);

  //Get
  string GetRouteID() { return this->RouteID; }
  string GetAgencyID() { return AgencyID; }
  string GetShortName() { return ShortName; }
  string GetLongName() { return LongName; }
  string GetDesc() { return Desc; }
  string GetType() { return Type; }
  string GetURL() { return URL; }
  string GetColor() { return Color; }
  string GetTextColor() { return TextColor; }
  string GetSorOrder() { return SortOrder; }

  //Set
  void SetRouteID(const string &routeid) { this->RouteID = routeid; }
  void SetAgencyID(const string &agencyid) { AgencyID = agencyid; }
  void SetShortName(const string &shortname) { ShortName = shortname; }
  void SetLongName(const string &longname) { LongName = longname; }
  void SetDesc(const string &desc) { Desc = desc; }
  void SetType(const string &type) { Type = type; }
  void SetURL(const string &url) { URL = url; }
  void SetColor(const string &color) { Color = color; }
  void SetTextColor(const string &textcolor) { TextColor = textcolor; }
  void SetSortOrder(const string &sortorder) { SortOrder = sortorder; }
};

class Shapes
{
private:
  string ShapeID;
  string ShapePtLat;
  string ShapePtLon;
  string ShapePtSequence;
  string ShapeDistTraveled;

public:
  Shapes(const string &shapeid, const string &shapeptlat, const string &shapeptlon, const string &shapeptsequence, const string &shapedisttraveled);

  //Gets
  string GetShapeID() { return this->ShapeID; }
  string GetShapePtLat() { return this->ShapePtLat; }
  string GetShapePtLon() { return this->ShapePtLon; }
  string GetShapePtSequence() { return this->ShapePtSequence; }
  string GetShapeDistTraveled() { return this->ShapeDistTraveled; }

  //Sets
  void SetShapeID(const string &shapeid) { this->ShapeID = shapeid; }
  void SetShapePtLat(const string &shapeptlat) { this->ShapePtLat = shapeptlat; }
  void SetShapePtLon(const string &shapeptlon) { this->ShapePtLon = shapeptlon; }
  void SetShapePtSequence(const string &shapeptsequence) { this->ShapePtSequence = shapeptsequence; }
  void SetShapeDistTraveled(const string &shapedisttraveled) { this->ShapeDistTraveled = shapedisttraveled; }
};

class Stops
{
private:
  string StopID;
  string Code;
  string Name;
  string Desc;
  string Lat;
  string Lon;
  string ZoneID;
  string URL;
  string LocationType;
  string ParentStation;
  string StopTimeZone;
  string Boarding;

public:
  Stops(const string &stopid, const string &code, const string &name, const string &desc, const string &lat, const string &lon, const string &zoneid, const string &url, const string &locationtype, const string &parentstation, const string &stoptimezone, const string &boarding);

  //Get
  string GetStopID() { return this->StopID; }
  string GetCode() { return this->Code; }
  string GetName() { return this->Name; }
  string GetDesc() { return this->Desc; }
  string GetLat() { return this->Lat; }
  string GetLon() { return this->Lon; }
  string GetZoneID() { return this->ZoneID; }
  string GetURL() { return this->URL; }
  string GetLocationType() { return this->LocationType; }
  string GetParentStation() { return this->ParentStation; }
  string GetStopTimeZone() { return this->StopTimeZone; }
  string GetBoarding() { return this->Boarding; }

  //Set
  void SetStopID(const string &stopid) { this->StopID = stopid; }
  void SetCode(const string &code) { this->Code = code; }
  void SetName(const string &name) { this->Name = name; }
  void SetDesc(const string &desc) { this->Desc = desc; }
  void SetLat(const string &lat) { Lat = lat; }
  void SetLon(const string &lon) { Lon = lon; }
  void SetZoneID(const string &zoneid) { ZoneID = zoneid; }
  void SetURL(const string &url) { URL = url; }
  void SetLocationType(const string &locatintype) { LocationType = locatintype; }
  void SetParentStation(const string &parentstation) { ParentStation = parentstation; }
  void SetStopTimeZone(const string &stoptimezone) { StopTimeZone = stoptimezone; }
  void SetBoarding(const string &boarding) { Boarding = boarding; }
};

class StopTimes
{
private:
  string TripID;
  string ArrivalTime;
  string DepartureTime;
  string StopID;
  int StopSequence;
  string StopHeadsign;
  string PickupType;
  string DropOffType;
  string ShapeDistTraveled;
  string Timepoint;

public:
  StopTimes(const string &tripid, const string &arrivaltime, const string &departuretime, const string &stopid, const string &stopsequence, const string &stopheadsign, const string &pickuptype, const string &dropofftype, const string &shapedistraveled, const string &timepoint);

  //Gets
  string GetTripID() { return this->TripID; }
  string GetArrivalTime() { return this->ArrivalTime; }
  string GetDepartureTime() { return this->DepartureTime; }
  string GetStopID() { return this->StopID; }
  int GetStopSequence() { return this->StopSequence; }
  string GetStopHeadsign() { return this->StopHeadsign; }
  string GetPickupType() { return this->PickupType; }
  string GetDropOffType() { return this->DropOffType; }
  string GetShapeDistTraveled() { return this->ShapeDistTraveled; }
  string GetTimepoint() { return this->Timepoint; }

  //Sets
  void SetTripID(const string &tripid) { this->TripID = tripid; }
  void SetArrivalTime(const string &arrivaltime) { this->ArrivalTime = arrivaltime; }
  void SetDepartureTime(const string &departuretime) { this->DepartureTime = departuretime; }
  void SetStopID(const string &stopid) { this->StopID = stopid; }
  void SetStopSequence(const string &stopsequence) { this->StopSequence = stoi(stopsequence); }
  void SetStopSequence(const int &stopsequence) { this->StopSequence = stopsequence; }
  void SetStopHeadsign(const string &stopheadsign) { this->StopHeadsign = stopheadsign; }
  void SetPickupType(const string &pickuptype) { this->PickupType = pickuptype; }
  void SetDropOffType(const string &dropofftype) { this->DropOffType = dropofftype; }
  void SetShapeDistTraveled(const string &shapetrveled) { this->ShapeDistTraveled = shapetrveled; }
  void SetTimepoint(const string &timepoint) { this->Timepoint = timepoint; }
};

class Transfers
{
private:
  string FromStopID;
  string ToStopID;
  string TransferType;
  string MinTransferTime;

public:
  Transfers(const string &fromstopid, const string &tostopid, const string &transfertype, const string &mintransfertime);

  //Gets
  string GetFromStopID() { return this->FromStopID; }
  string GetToStopID() { return this->ToStopID; }
  string GetTransferType() { return this->TransferType; }
  string GetMinTransferTime() { return this->MinTransferTime; }
  //Sets
  void SetFromStopID(const string &fromstopid) { this->FromStopID = fromstopid; }
  void SetToStopID(const string &tostopid) { this->ToStopID = tostopid; }
  void SetTransferType(const string &transfertype) { this->TransferType = transfertype; }
  void SetMinTransferTime(const string &mintransfertime) { this->MinTransferTime = mintransfertime; }
};

class Trips
{
private:
  string RouteID;
  string ServiceID;
  string TripID;
  string TripHeadsign;
  string TripShortName;
  string DirectionID;
  string BlockID;
  string ShapeID;
  string WheelchairAccessible;
  string BikesAllowed;

public:
  Trips(const string &routeid, const string &serviceid, const string &tripid, const string &tripheadsign, const string &tripshortname, const string &directionid, const string &blockid, const string &shapeid, const string &wheelchairaccessible, const string &bikesallowed);

  //Gets
  string GetRouteID() { return this->RouteID; }
  string GetServiceID() { return this->ServiceID; }
  string GetTripID() { return this->TripID; }
  string GetTripHeadsign() { return this->TripHeadsign; }
  string GetTripShortName() { return this->TripShortName; }
  string GetDirectoryID() { return this->DirectionID; }
  string GetBlockID() { return this->BlockID; }
  string GetShapeID() { return this->WheelchairAccessible; }
  string GetWheelchairAccessible() { return this->WheelchairAccessible; }
  string GetBikesAllowed() { return this->BikesAllowed; }

  //Sets
  void SetRouteID(const string &routeid) { this->RouteID = routeid; }
  void SetServiceID(const string &serviceid) { this->ServiceID = serviceid; }
  void SetTripID(const string &tripid) { this->TripID = tripid; }
  void SetTripHeadsign(const string &tripheadsign) { this->TripHeadsign = tripheadsign; }
  void SetTripShortName(const string &tripshortname) { this->TripShortName = tripshortname; }
  void SetDirectionID(const string &directionid) { this->DirectionID = directionid; }
  void SetBlockID(const string &blockid) { this->BlockID = blockid; }
  void SetShapeID(const string &shapeid) { this->ShapeID = shapeid; }
  void SetWheelchairAccessible(const string &wheelchairaccessible) { this->WheelchairAccessible = wheelchairaccessible; }
  void SetBikesAllowed(const string &bikesallowed) { this->BikesAllowed = bikesallowed; }
};