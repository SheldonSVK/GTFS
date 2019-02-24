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
  StopTimes(const string &tripid, const string &arrivaltime, const string &departuretime, const string &stopid, const string &stopsequence, const string &stopheadsign, const string &pickuptype, const string &dropofftype, const string &shapedistraveled, const string &timepoint);
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
  void SetTripID(const string &tripid) { this->TripID = tripid; }
  void SetArrivalTime(const string &arrivaltime) { this->ArrivalTime = arrivaltime; }
  void SetDepartureTime(const string &departuretime) { this->DepartureTime = departuretime; }
  void SetStopID(const string &stopid) { this->StopID = stopid; }
  void SetStopSequence(const string &stopsequence) { this->StopSequence = stopsequence; }
  void SetStopHeadsign(const string &stopheadsign) { this->StopHeadsign = stopheadsign; }
  void SetPickupType(const string &pickuptype) { this->PickupType = pickuptype; }
  void SetDropOffType(const string &dropofftype) { this->DropOffType = dropofftype; }
  void SetShapeDistTraveled(const string &shapetrveled) { this->ShapeDistTraveled = shapetrveled; }
  void SetTimepoint(const string &timepoint) { this->Timepoint = timepoint; }
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

StopTimes::~StopTimes()
{
}
