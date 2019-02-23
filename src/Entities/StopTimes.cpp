#include <string>

using namespace std;

class StopTimes
{
private:
  string TripID;
  string ArrivalTime;
  string DepartureTime;
  string StopID;
  string StopSequence;
  string StopHeadsign;
  string PickupType;
  string DropOffType;
  string ShapeDistTraveled;
  string Timepoint;

public:
  StopTimes();
  StopTimes(string tripid, string arrivaltime, string departuretime, string stopid, string stopsequence, string stopheadsign, string pickuptype, string dropofftype, string shapedistraveled, string timepoint);
  ~StopTimes();

  //Gets
  string GetTripID() { return this->TripID; }
  string GetArrivalTime() { return this->ArrivalTime; }
  string GetDepartureTime() { return this->DepartureTime; }
  string GetStopID() { return this->StopID; }
  string GetStopSequence() { return this->StopSequence; }
  string GetStopHeadsign() { return this->StopHeadsign; }
  string GetPickupType() { return this->PickupType; }
  string GetDropOffType() { return this->DropOffType; }
  string GetShapeDistTraveled() { return this->ShapeDistTraveled; }
  string GetTimepoint() { return this->Timepoint; }

  //Sets
  void SetTripID(string tripid) { this->TripID = tripid; }
  void SetArrivalTime(string arrivaltime) { this->ArrivalTime = arrivaltime; }
  void SetDepartureTime(string departuretime) { this->DepartureTime = departuretime; }
  void SetStopID(string stopid) { this->StopID = stopid; }
  void SetStopSequence(string stopsequence) { this->StopSequence = stopsequence; }
  void SetStopHeadsign(string stopheadsign) { this->StopHeadsign = stopheadsign; }
  void SetPickupType(string pickuptype) { this->PickupType = pickuptype; }
  void SetDropOffType(string dropofftype) { this->DropOffType = dropofftype; }
  void SetShapeDistTraveled(string shapetrveled) { this->ShapeDistTraveled = shapetrveled; }
  void SetTimepoint(string timepoint) { this->Timepoint = timepoint; }
};

StopTimes::StopTimes()
{
  this->TripID.clear();
  this->ArrivalTime.clear();
  this->DepartureTime.clear();
  this->StopID.clear();
  this->StopSequence.clear();
  this->StopHeadsign.clear();
  this->PickupType.clear();
  this->DropOffType.clear();
  this->ShapeDistTraveled.clear();
  this->Timepoint.clear();
}

StopTimes::StopTimes(string tripid, string arrivaltime, string departuretime, string stopid, string stopsequence, string stopheadsign, string pickuptype, string dropofftype, string shapedistraveled, string timepoint)
{
  this->TripID = tripid;
  this->ArrivalTime = arrivaltime;
  this->DepartureTime = departuretime;
  this->StopID = stopid;
  this->StopSequence = stopsequence;
  this->StopHeadsign = stopheadsign;
  this->PickupType = pickuptype;
  this->DropOffType = dropofftype;
  this->ShapeDistTraveled = shapedistraveled;
  this->Timepoint = timepoint;
}

StopTimes::~StopTimes()
{
}
