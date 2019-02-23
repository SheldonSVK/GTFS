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
    FareRules(string fareid, string routeid, string originid, string destinationid, string containsid);
    ~FareRules();

    //Gets
    string GetFareID() { return this->FareID; }
    string GetRouteID() { return this->RouteID; }
    string GetOriginID() { return this->OriginID; }
    string GetDestinationID() { return this->DestinationID; }
    string GetContainsID() { return this->ContainsID; }

    //Sets
    void SetFareID(string fareid) { this->FareID = fareid; }
    void SetRouteID(string routeid) { this->RouteID = routeid; }
    void SetOriginID(string originid) { this->OriginID = originid; }
    void SetDestinationID(string destinationid) { this->DestinationID = destinationid; }
    void SetContainsID(string containsid) { this->ContainsID = containsid; }
};

FareRules::FareRules()
{
    this->FareID.clear();
    this->RouteID.clear();
    this->OriginID.clear();
    this->DestinationID.clear();
    this->ContainsID.clear();
}

FareRules::FareRules(string fareid, string routeid, string originid, string destinationid, string containsid)
{
    this->FareID = fareid;
    this->RouteID = routeid;
    this->OriginID = originid;
    this->DestinationID = destinationid;
    this->ContainsID = containsid;
}

FareRules::~FareRules()
{
}
