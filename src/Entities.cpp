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
    this->Hour = hour;
    this->Minute = minute;
    this->Seconds = seconds;
}

Time::Time(string time_details)
{
    this->Hour = this->GetInt(time_details);
    this->Minute = this->GetInt(time_details);
    this->Seconds = this->GetInt(time_details);
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