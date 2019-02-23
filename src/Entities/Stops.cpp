#include <string>

using namespace std;

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
	Stops();
	Stops(string stopid, string code, string name, string desc, string lat, string lon, string zoneid, string url, string locationtype, string parentstation, string stoptimezone, string boarding);
	~Stops();

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
	void SetStopID(string stopid) { this->StopID = stopid; }
	void SetCode(string code) { this->Code = code; }
	void SetName(string name) { this->Name = name; }
	void SetDesc(string desc) { this->Desc = desc; }
	void SetLat(string lat) { Lat = lat; }
	void SetLon(string lon) { Lon = lon; }
	void SetZoneID(string zoneid) { ZoneID = zoneid; }
	void SetURL(string url) { URL = url; }
	void SetLocationType(string locatintype) { LocationType = locatintype; }
	void SetParentStation(string parentstation) { ParentStation = parentstation; }
	void SetStopTimeZone(string stoptimezone) { StopTimeZone = stoptimezone; }
	void SetBoarding(string boarding) { Boarding = boarding; }
};

Stops::Stops()
{
	StopID.clear();
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

Stops::Stops(string stopid, string code, string name, string desc, string lat, string lon, string zoneid, string url, string locationtype, string parentstation, string stoptimezone, string boarding)
{
	this->StopID = stopid;
	Code = code;
	Name = name;
	Desc = desc;
	Lat = lat;
	Lon = lon;
	ZoneID = zoneid;
	URL = url;
	LocationType = locationtype;
	ParentStation = parentstation;
	StopTimeZone = stoptimezone;
	Boarding = boarding;
}