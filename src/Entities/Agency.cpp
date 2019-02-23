#include <string>

using namespace std;

class Agency
{
  private:
	string AgencyID;
	string Name;
	string URL;
	string TimeZone;
	string Lang;
	string Phone;
	string FareURL;
	string Email;

  public:
	Agency();
	Agency(string agencyid, string name, string url, string timezone, string lang, string phone, string fareurl, string email);
	~Agency();

	//Getery
	string GetAgencyID() { return this->AgencyID; }
	string GetName() { return this->Name; }
	string GetURL() { return this->URL; }
	string GetTimeZone() { return this->TimeZone; }
	string GetLang() { return this->Lang; }
	string GetPhone() { return this->Phone; }
	string GetFareURL() { return this->FareURL; }
	string GetEmail() { return this->Email; }

	//Settery
	void SetAgencyID(string agencyid) { this->AgencyID = agencyid; }
	void SetName(string name) { this->Name = name; }
	void SetTimeZone(string timezone) { this->TimeZone = timezone; }
	void SetLang(string lang) { this->Lang = lang; }
	void SetPhone(string phone) { this->Phone = phone; }
	void SetFareURL(string fareurl) { this->FareURL = fareurl; }
	void SetEmail(string email) { this->Email = email; }
};

//Empty constructor
Agency::Agency()
{
	this->AgencyID.clear();
	this->Name.clear();
	this->URL.clear();
	this->TimeZone.clear();
	this->Lang.clear();
	this->Phone.clear();
	this->FareURL.clear();
	this->Email.clear();
}

//Constructor with all parameters
Agency::Agency(string agencyid, string name, string url, string timezone, string lang, string phone, string fareurl, string email)
{
	this->AgencyID = agencyid;
	this->Name = name;
	this->URL = url;
	this->TimeZone = timezone;
	this->Lang = lang;
	this->Phone = phone;
	this->FareURL = fareurl;
	this->Email = email;
}
