#include <string>

using namespace std;

class Stops
{
private:
	string ID;
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
	~Stops();

	//Get
	string GetID() { return ID; }
	string GetCode() { return Code; }
	string GetName() { return Name; }
	string GetDesc() { return Desc; }
	string GetLat() { return Lat; }
	string GetLon() { return Lon; }
	string GetZoneID() { return ZoneID; }
	string GetURL() { return URL; }
	string GetLocationType() { return LocationType; }
	string GetParentStation() { return ParentStation; }
	string GetStopTimeZone() { return StopTimeZone; }
	string GetBoarding() { return Boarding; }
	Stops* GetNext() { return Next; }
	Stops* GetPrev() { return Prev; }

	//Set
	void SetID(string id) { ID = id; }
	void SetCode(string code) { Code = code; }
	void SetName(string name) { Name = name; }
	void SetDesc(string desc) { Desc = desc; }
	void SetLat(string lat) { Lat = lat; }
	void SetLon(string lon) { Lon = lon; }
	void SetZoneID(string zoneid) { ZoneID = zoneid; }
	void SetURL(string url) { URL = url; }
	void SetLocationType(string locatintype) { LocationType = locatintype; }
	void SetParentStation(string parentstation) { ParentStation = parentstation; }
	void SetStopTimeZone(string stoptimezone) { StopTimeZone = stoptimezone; }
	void SetBoarding(string boarding) { Boarding = boarding; }
};
