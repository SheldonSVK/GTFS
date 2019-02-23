#include <string>

using namespace std;

class Trips
{
private:
    string ID;
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
    Trips(string id,string serviceid,string tripid,string tripheadsign,string tripshortname,string directionid,string blockid,string shapeid,string wheelchairaccessible,string bikesallowed);
    ~Trips();

    //Gets
    string GetID() {return this->ID;}
    string GetServiceID(){return this->ServiceID;}
    string GetTripID(){return this->TripID;}
    string GetTripHeadsign(){return this->TripHeadsign;}
    string GetTripShortName(){return this->TripShortName;}
    string GetDirectoryID(){return this->DirectionID;}
    string GetBlockID() {return this->BlockID;}
    string GetShapeID() {return this->WheelchairAccessible;}
    string GetWheelchairAccessible() {return this->WheelchairAccessible;}
    string GetBikesAllowed() {return this->BikesAllowed;}

    //Sets
    void SetID(string id) {this->ID=id;}
    void SetServiceID(string serviceid) {this->ServiceID=serviceid;}
    void SetTripID(string tripid) {this->TripID=tripid;}
    void SetTripHeadsign(string tripheadsign) {this->TripHeadsign=tripheadsign;}
    void SetTripShortName(string tripshortname) {this->TripShortName=tripshortname;}
    void SetDirectionID(string directionid) {this->DirectionID=directionid;}
    void SetBlockID(string blockid) {this->BlockID=blockid;}
    void SetShapeID(string shapeid) {this->ShapeID=shapeid;}
    void SetWheelchairAccessible(string wheelchairaccessible) {this->WheelchairAccessible=wheelchairaccessible;}
    void SetBikesAllowed(string bikesallowed) {this->BikesAllowed=bikesallowed;}
};

Trips::Trips()
{
    this->ID.clear();
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


Trips::Trips(string id,string serviceid,string tripid,string tripheadsign,string tripshortname,string directionid,string blockid,string shapeid,string wheelchairaccessible,string bikesallowed)
{
    this->ID=id;
    this->ServiceID=serviceid;
    this->TripID=tripid;
    this->TripHeadsign=tripheadsign;
    this->TripShortName=tripshortname;
    this->DirectionID=directionid;
    this->BlockID=blockid;
    this->ShapeID=shapeid;
    this->WheelchairAccessible=wheelchairaccessible;
    this->BikesAllowed=bikesallowed;
}

Trips::~Trips()
{
}
