#include <string>

using namespace std;

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
  Trips();
  Trips(const string &routeid, const string &serviceid, const string &tripid, const string &tripheadsign, const string &tripshortname, const string &directionid, const string &blockid, const string &shapeid, const string &wheelchairaccessible, const string &bikesallowed);
  ~Trips();

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

Trips::Trips()
{
  this->RouteID.clear();
  this->ServiceID.clear();
  this->TripID.clear();
  this->TripHeadsign.clear();
  this->TripShortName.clear();
  this->DirectionID.clear();
  this->BlockID.clear();
  this->ShapeID.clear();
  this->WheelchairAccessible.clear();
  this->BikesAllowed.clear();
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

Trips::~Trips()
{
}
