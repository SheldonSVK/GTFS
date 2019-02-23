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
    Transfers(string fromstopid, string tostopid, string transfertype, string mintransfertime);
    ~Transfers();

    //Gets
    string GetFromStopID() { return this->FromStopID; }
    string GetToStopID() { return this->ToStopID; }
    string GetTransferType() { return this->TransferType; }
    string GetMinTransferTime() { return this->MinTransferTime; }

    //Sets
    void SetFromStopID(string fromstopid) { this->FromStopID = fromstopid; }
    void SetToStopID(string tostopid) { this->ToStopID = tostopid; }
    void SetTransferType(string transfertype) { this->TransferType = transfertype; }
    void SetMinTransferTime(string mintransfertime) { this->MinTransferTime = mintransfertime; }
};

Transfers::Transfers()
{
    this->FromStopID.clear();
    this->ToStopID.clear();
    this->TransferType.clear();
    this->MinTransferTime.clear();
}

Transfers::Transfers(string fromstopid, string tostopid, string transfertype, string mintransfertime)
{
    this->FromStopID = fromstopid;
    this->ToStopID = tostopid;
    this->TransferType = transfertype;
    this->MinTransferTime = mintransfertime;
}

Transfers::~Transfers()
{
}
