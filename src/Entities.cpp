#include "../include/Entities.hpp"

int Time::GetInt(string &str)
{
    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ':')
        {
            str = str.substr(i + 1, str.length() - 1);
            break;
        }
        else
            temp += str[i];
    }
    if (temp.length() == 0)
        return 0;
    return stoi(temp);
}

Time::Time(int hour, int minute, int seconds)
{
    Seconds = seconds % 60;
    Minute = seconds / 60;
    Minute += (minute % 60);
    Hour = minute / 60;
    Hour += hour;

    if (Seconds < 0)
    {
        Seconds = Seconds + 60;
        Minute--;
    }
    if (Minute < 0)
    {
        Minute = Minute + 60;
        Hour--;
    }
}

Time::Time(string time_details)
{
    Hour = this->GetInt(time_details);
    Minute = this->GetInt(time_details);
    Seconds = this->GetInt(time_details);
}

bool operator==(const Time &t1, const Time &t2)
{
    return (t1.Hour == t2.Hour && t1.Minute == t2.Minute && t1.Seconds == t2.Seconds);
}
bool operator!=(const Time &t1, const Time &t2)
{
    return !(t1 == t2);
}

bool operator<(const Time &t1, const Time &t2)
{
    if (t1 == t2)
        return false;
    if (t1.Hour < t2.Hour)
        return true;
    if (t2.Hour < t1.Hour)
        return false;
    if (t1.Minute < t2.Minute)
        return true;
    if (t2.Minute < t1.Minute)
        return false;
    if (t1.Seconds < t2.Seconds)
        return true;
    return true;
}
bool operator>(const Time &t1, const Time &t2)
{
    return (!(t1 < t2) && t1 != t2);
}
bool operator<=(const Time &t1, const Time &t2)
{
    return (t1 < t2 || t1 == t2);
}
bool operator>=(const Time &t1, const Time &t2)
{
    return (t1 > t2 || t1 == t2);
}

Time operator+(Time const &t1, Time const &t2)
{
    int second = t1.Seconds + t2.Seconds;
    int minute = t1.Minute + t2.Minute;
    int hour = t1.Hour + t2.Hour;
    return Time(hour, minute, second);
}
Time operator-(Time const &t1, Time const &t2)
{
    int second = t1.Seconds - t2.Seconds;
    int minute = t1.Minute - t2.Minute;
    int hour = t1.Hour - t2.Hour;
    return Time(hour, minute, second);
}

int Date::GetInt(string &str, int size)
{
    string temp;
    if (size > str.length())
        return 0;
    for (int i = 0; i < size + 1; i++)
    {
        if (i == size)
        {
            str = str.substr(i, str.length() - 1);
            break;
        }
        else
            temp += str[i];
    }

    if (temp.length() == 0)
        return 0;
    return stoi(temp);
}

Date::Date(int day, int month, int year)
{
    this->Day = day;
    this->Month = month;
    this->Year = year;
}
Date::Date(string date)
{
    this->Year = GetInt(date, 4);
    this->Month = GetInt(date, 2);
    this->Day = GetInt(date, 2);
}

int Date::TotalDays()
{
    int finish = 0;
    int temp = this->Year;
    temp = temp - 2000;
    while (temp > 4)
    {
        finish = finish + 1461;
        temp = temp - 4;
    }

    if (temp == 4 && this->Month > 2)
        finish++;

    while (temp > 0)
    {
        finish = finish + 365;
        temp = temp - 1;
    }

    temp = this->Month;
    if (temp > 1)
        finish += 31;
    if (temp > 2)
        finish += 28;
    if (temp > 3)
        finish += 31;
    if (temp > 4)
        finish += 30;
    if (temp > 5)
        finish += 31;
    if (temp > 6)
        finish += 30;
    if (temp > 7)
        finish += 31;
    if (temp > 8)
        finish += 31;
    if (temp > 9)
        finish += 30;
    if (temp > 10)
        finish += 31;
    if (temp > 11)
        finish = 30;
    if (temp > 12)
        finish += 31;
    finish += this->Day;
    return finish;
    //1461
}

DayOfWeek Date::GetDayOfWeek()
{
    switch (this->TotalDays() % 7)
    {
    case 0:
        return Saturday;
    case 1:
        return Sunday;
    case 2:
        return Monday;
    case 3:
        return Tuesday;
    case 4:
        return Wednesday;
    case 5:
        return Thursday;
    case 6:
        return Sunday;

    default:
        return Saturday;
    }
}

void Date::SetTotalDays(int days)
{
    int year = 2000;
    int month = 1;
    days++;
    while (days > 1461)
    {
        year += 4;
        days -= 1461;
    }
    if (days < 61)
    {
        if (days < 32)
        {
            this->Month = month;
            this->Day = days;
            return;
        }
        days -= 31;
        month++;
        this->Month = month;
        this->Day = days;
        return;
    }
    days--;
    while (days > 365)
    {
        year += 1;
        days -= 365;
    }
    this->Year = year;
    if (days < 32)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 31;
    month++;
    if (days < 29)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 28;
    month++;

    //Marec
    if (days < 32)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 31;
    month++;
    //April
    if (days < 31)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 30;
    month++;
    //Maj
    if (days < 32)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 31;
    month++;
    //Jun
    if (days < 31)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 30;
    month++;
    //jul
    if (days < 32)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 31;
    month++;
    //August
    if (days < 32)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 31;
    month++;
    //Setember
    if (days < 31)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 30;
    month++;
    //Oktober
    if (days < 32)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 31;
    month++;
    //November
    if (days < 31)
    {
        this->Month = month;
        this->Day = days;
        return;
    }
    days -= 30;
    month++;
    //December
    this->Month = month;
    this->Day = days;
}

void Date::AddDays(int days)
{
    int total = this->TotalDays();
    total += days;
    this->SetTotalDays(total);
}

bool operator==(const Date &d1, const Date &d2)
{
    return (d1.Year == d2.Year && d1.Month == d2.Month && d1.Day == d2.Day);
}

bool operator!=(const Date &d1, const Date &d2)
{
    return !(d1 == d2);
}
bool operator<(const Date &d1, const Date &d2)
{
    if (d1 == d2)
        return false;
    if (d1.Year < d2.Year)
        return true;
    if (d2.Year < d1.Year)
        return false;
    if (d1.Month < d2.Month)
        return true;
    if (d2.Month < d1.Month)
        return false;
    if (d1.Day < d2.Day)
        return true;
    return false;
}
bool operator>(const Date &d1, const Date &d2)
{
    if (d1 == d2)
        return false;
    return !(d1 < d2);
}
bool operator<=(const Date &d1, const Date &d2)
{
    return (d1 < d2 || d1 == d2);
}
bool operator>=(const Date &d1, const Date &d2)
{
    return (d1 > d2 || d1 == d2);
}

DateTime::DateTime(Date tempdate, Time temptime)
{
    this->SetDate(tempdate);
    this->SetTime(temptime);
}

bool operator==(const DateTime &d1, const DateTime &d2)
{
    return (d1.date == d2.date && d1.time == d2.time);
}
bool operator!=(const DateTime &d1, const DateTime &d2)
{
    return !(d1 == d2);
}
bool operator<(const DateTime &d1, const DateTime &d2)
{
    if (d1 == d2)
        return false;
    if (d1.date < d2.date)
        return true;
    if (d2.date < d1.date)
        return false;
    if (d1.time < d2.time)
        return true;
    return false;
}
bool operator>(const DateTime &d1, const DateTime &d2)
{
    if (d1 == d2)
        return false;
    return !(d1 < d2);
}
bool operator<=(const DateTime &d1, const DateTime &d2)
{
    return (d1 == d2 || d1 < d2);
}
bool operator>=(const DateTime &d1, const DateTime &d2)
{
    return (d1 == d2 || d1 > d2);
}

Agency::Agency(const string &agencyid, const string &name, const string &url, const string &timezone, const string &lang, const string &phone, const string &fareurl, const string &email)
{
    SetAgencyID(agencyid);
    SetName(name);
    SetURL(url);
    SetTimeZone(timezone);
    SetLang(lang);
    SetPhone(phone);
    SetFareURL(fareurl);
    SetEmail(email);
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

CalendarDates::CalendarDates(const string &serviceid, const string &date, const string &exceptiontype)
{
    SetServiceID(serviceid);
    SetDate(date);
    SetExceptionType(exceptiontype);
}

FareAttributes::FareAttributes(const string &fareid, const string &price, const string &currencytype, const string &paymentmethod, const string &transfers, const string &agencyid, const string &transferduration)
{
    SetFareID(fareid);
    SetPrice(price);
    SetCurrencyType(currencytype);
    SetPaymentMethod(paymentmethod);
    SetTransfers(transfers);
    SetAgencyID(agencyid);
    SetTransferDuration(transferduration);
}

FareRules::FareRules(const string &fareid, const string &routeid, const string &originid, const string &destinationid, const string &containsid)
{
    SetFareID(fareid);
    SetRouteID(routeid);
    SetOriginID(originid);
    SetDestinationID(destinationid);
    SetContainsID(containsid);
}

FeedInfo::FeedInfo(const string &feedpublishername, const string &feedpublisherurl, const string &feedlang, const string &feedstartdate, const string &feedenddate, const string &feedversion, const string &feedcontactemail, const string &feedcontacturl)
{
    SetFeedPublisherName(feedpublishername);
    SetFeedPublisherURL(feedpublisherurl);
    SetFeedLang(feedlang);
    SetFeedStartDate(feedstartdate);
    SetFeedEndDate(feedenddate);
    SetFeedVersion(feedversion);
    SetFeedContactEmail(feedcontactemail);
    SetFeedContactURL(feedcontacturl);
}

Frequencies::Frequencies(const string &tripid, const string &starttime, const string &endtime, const string &headwaysecs, const string &exacttimes)
{
    SetTripID(tripid);
    SetStartTime(starttime);
    SetEndTime(endtime);
    SetHeadwaySecs(headwaysecs);
    SetExactTimes(exacttimes);
}

//constructor with parameters
Routes::Routes(const string &routeid, const string &agencyid, const string &shortname, const string &longname, const string &desc, const string &type, const string &url, const string &color, const string &textcolor, const string &sortorder)
{
    SetRouteID(routeid);
    SetAgencyID(agencyid);
    SetShortName(shortname);
    SetLongName(longname);
    SetDesc(desc);
    SetType(type);
    SetURL(url);
    SetColor(color);
    SetTextColor(textcolor);
    SetSortOrder(sortorder);
}

Shapes::Shapes(const string &shapeid, const string &shapeptlat, const string &shapeptlon, const string &shapeptsequence, const string &shapedisttraveled)
{
    SetShapeID(shapeid);
    SetShapePtLat(shapeptlat);
    SetShapePtLon(shapeptlon);
    SetShapePtSequence(shapeptsequence);
    SetShapeDistTraveled(shapedisttraveled);
}

Stops::Stops(const string &stopid, const string &code, const string &name, const string &desc, const string &lat, const string &lon, const string &zoneid, const string &url, const string &locationtype, const string &parentstation, const string &stoptimezone, const string &boarding)
{
    SetStopID(stopid);
    SetCode(code);
    SetName(name);
    SetDesc(desc);
    SetLat(lat);
    SetLon(lon);
    SetZoneID(zoneid);
    SetURL(url);
    SetLocationType(locationtype);
    SetParentStation(parentstation);
    SetStopTimeZone(stoptimezone);
    SetBoarding(boarding);
}

StopTimes::StopTimes(const string &tripid, const string &arrivaltime, const string &departuretime, const string &stopid, const string &stopsequence, const string &stopheadsign, const string &pickuptype, const string &dropofftype, const string &shapedistraveled, const string &timepoint)
{
    SetTripID(tripid);
    SetArrivalTime(arrivaltime);
    SetDepartureTime(departuretime);
    SetStopID(stopid);
    SetStopSequence(stopsequence);
    SetStopHeadsign(stopheadsign);
    SetPickupType(pickuptype);
    SetDropOffType(dropofftype);
    SetShapeDistTraveled(shapedistraveled);
    SetTimepoint(timepoint);
}

Transfers::Transfers(const string &fromstopid, const string &tostopid, const string &transfertype, const string &mintransfertime)
{
    SetFromStopID(fromstopid);
    SetToStopID(tostopid);
    SetTransferType(transfertype);
    SetMinTransferTime(mintransfertime);
}

Trips::Trips(const string &routeid, const string &serviceid, const string &tripid, const string &tripheadsign, const string &tripshortname, const string &directionid, const string &blockid, const string &shapeid, const string &wheelchairaccessible, const string &bikesallowed)
{
    SetRouteID(routeid);
    SetServiceID(serviceid);
    SetTripID(tripid);
    SetTripHeadsign(tripheadsign);
    SetTripShortName(tripshortname);
    SetDirectionID(directionid);
    SetBlockID(blockid);
    SetShapeID(shapeid);
    SetWheelchairAccessible(wheelchairaccessible);
    SetBikesAllowed(bikesallowed);
}