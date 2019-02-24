#include <string>

using namespace std;

class FareRules
{
private:
  string FareID;
  string RouteID;
  string OriginID;
  string DestinationID;
  string ContainsID;

public:
  FareRules();
  FareRules(const string &fareid, const string &routeid, const string &originid, const string &destinationid, const string &containsid);
  ~FareRules();

  //Gets
  string GetFareID() { return this->FareID; }
  string GetRouteID() { return this->RouteID; }
  string GetOriginID() { return this->OriginID; }
  string GetDestinationID() { return this->DestinationID; }
  string GetContainsID() { return this->ContainsID; }

  //Sets
  void SetFareID(const string &fareid) { this->FareID = fareid; }
  void SetRouteID(const string &routeid) { this->RouteID = routeid; }
  void SetOriginID(const string &originid) { this->OriginID = originid; }
  void SetDestinationID(const string &destinationid) { this->DestinationID = destinationid; }
  void SetContainsID(const string &containsid) { this->ContainsID = containsid; }
};

FareRules::FareRules()
{
  this->FareID.clear();
  this->RouteID.clear();
  this->OriginID.clear();
  this->DestinationID.clear();
  this->ContainsID.clear();
}

FareRules::FareRules(const string &fareid, const string &routeid, const string &originid, const string &destinationid, const string &containsid)
{
  SetFareID(fareid);
  SetRouteID(routeid);
  SetOriginID(originid);
  SetDestinationID(destinationid);
  SetContainsID(containsid);
}

FareRules::~FareRules()
{
}
