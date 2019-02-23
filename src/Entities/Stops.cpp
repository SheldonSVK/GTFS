#include "Stops.h"

Stops::Stops()
{
    ID.clear();
    Code.clear();
    Name.clear();
    Desc.clear();
    Lat.clear();
    Lon.clear();
    ZoneID.clear();
    URL.clear();
    LocationType.clear();
    ParentStation.clear();
    StopTimeZone.clear();
    Boarding.clear();
}

Stops::Stops(string id,string code,string name,string desc,string lat,string lon,string zoneid,string url,string locationtype,string parentstation,string stoptimezone,string boarding)
{
    ID=id;
    Code=code;
    Name=name;
    Desc=desc;
    Lat=lat;
    Lon=lon;
    ZoneID=zoneid;
    URL=url;
    LocationType=locationtype;
    ParentStation=parentstation;
    StopTimeZone=stoptimezone;
    Boarding=boarding;
}