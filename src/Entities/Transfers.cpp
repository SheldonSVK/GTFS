#include <string>

using namespace std;

class Transfers
{
private:
  string FromStopID;
  string ToStopID;
  string TransferType;
  string MinTransferTime;

public:
  Transfers();
  Transfers(const string &fromstopid, const string &tostopid, const string &transfertype, const string &mintransfertime);
  ~Transfers();

  //Gets
  string GetFromStopID() { return this->FromStopID; }
  string GetToStopID() { return this->ToStopID; }
  string GetTransferType() { return this->TransferType; }
  string GetMinTransferTime() { return this->MinTransferTime; }

  //Sets
  void SetFromStopID(const string &fromstopid) { this->FromStopID = fromstopid; }
  void SetToStopID(const string &tostopid) { this->ToStopID = tostopid; }
  void SetTransferType(const string &transfertype) { this->TransferType = transfertype; }
  void SetMinTransferTime(const string &mintransfertime) { this->MinTransferTime = mintransfertime; }
};

Transfers::Transfers()
{
  this->FromStopID.clear();
  this->ToStopID.clear();
  this->TransferType.clear();
  this->MinTransferTime.clear();
}

Transfers::Transfers(const string &fromstopid, const string &tostopid, const string &transfertype, const string &mintransfertime)
{
  SetFromStopID(fromstopid);
  SetToStopID(tostopid);
  SetTransferType(transfertype);
  SetMinTransferTime(mintransfertime);
}

Transfers::~Transfers()
{
}
