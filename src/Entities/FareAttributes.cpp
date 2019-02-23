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
    FareAttributes(string fareid, string price, string currencytype, string paymentmethod, string transfers, string agencyid, string transferduration);
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
    void SetFareID(string fareid) { this->FareID = fareid; }
    void SetPrice(string price) { this->Price = price; }
    void SetCurrencyType(string currencytype) { this->CurrencyType = currencytype; }
    void SetPaymentMethod(string paymentmethod) { this->PaymentMethod = paymentmethod; }
    void SetTransfers(string transfers) { this->Transfers = transfers; }
    void SetAgencyID(string agencyid) { this->AgencyID = agencyid; }
    void SetTransferDuration(string transferduration) { this->TransferDuration = transferduration; }
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

FareAttributes::FareAttributes(string fareid, string price, string currencytype, string paymentmethod, string transfers, string agencyid, string transferduration)
{
    this->FareID = fareid;
    this->Price = price;
    this->CurrencyType = currencytype;
    this->PaymentMethod = paymentmethod;
    this->Transfers = transfers;
    this->AgencyID = agencyid;
    this->TransferDuration = TransferDuration;
}

FareAttributes::~FareAttributes()
{
}
