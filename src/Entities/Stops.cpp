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
	Stops(const string &stopid, const string &code, const string &name, const string &desc, const string &lat, const string &lon, const string &zoneid, const string &url, const string &locationtype, const string &parentstation, const string &stoptimezone, const string &boarding);
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