#include <string>

using namespace std;

class FareAttributes
{
private:
  string FareID;
  string Price;
  string CurrencyType;
  string PaymentMethod;
  string Transfers;
  string AgencyID;
  string TransferDuration;

public:
  FareAttributes();
  FareAttributes(const string &fareid, const string &price, const string &currencytype, const string &paymentmethod, const string &transfers, const string &agencyid, const string &transferduration);
  ~FareAttributes();

  //Gets
  string GetFareID() { return this->FareID; }
  string GetPrice() { return this->Price; }
  string GetCurrencyType() { return this->CurrencyType; }
  string GetPaymentMethod() { return this->PaymentMethod; }
  string GetTransfers() { return this->Transfers; }
  string GetAgencyID() { return this->AgencyID; }
  string GetTransferDuration() { return this->TransferDuration; }

  //Sets
  void SetFareID(const string &fareid) { this->FareID = fareid; }
  void SetPrice(const string &price) { this->Price = price; }
  void SetCurrencyType(const string &currencytype) { this->CurrencyType = currencytype; }
  void SetPaymentMethod(const string &paymentmethod) { this->PaymentMethod = paymentmethod; }
  void SetTransfers(const string &transfers) { this->Transfers = transfers; }
  void SetAgencyID(const string &agencyid) { this->AgencyID = agencyid; }
  void SetTransferDuration(const string &transferduration) { this->TransferDuration = transferduration; }
};

FareAttributes::FareAttributes(/* args */)
{
  this->FareID.clear();
  this->Price.clear();
  this->CurrencyType.clear();
  this->PaymentMethod.clear();
  this->Transfers.clear();
  this->AgencyID.clear();
  this->TransferDuration.clear();
}

FareAttributes::FareAttributes(const string &fareid, const string &price, const string &currencytype, const string &paymentmethod, const string &transfers, const string &agencyid, const string &transferduration)
{
  SetFareID(fareid);
  SetPrice(price);
  SetCurrencyType(currencytype);
  SetPaymentMethod(paymentmethod);
  SetTransfers(transfers);
  SetAgencyID(agencyid);
  SetTransferDuration(transferduration);
}

FareAttributes::~FareAttributes()
{
}
