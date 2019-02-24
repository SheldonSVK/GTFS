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
	Agency(const string &agencyid, const string &name, const string &url, const string &timezone, const string &lang, const string &phone, const string &fareurl, const string &email);
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
	void SetAgencyID(const string &agencyid) { this->AgencyID = agencyid; }
	void SetName(const string &name) { this->Name = name; }
	void SetURL(const string &url) { this->URL = url; }
	void SetTimeZone(const string &timezone) { this->TimeZone = timezone; }
	void SetLang(const string &lang) { this->Lang = lang; }
	void SetPhone(const string &phone) { this->Phone = phone; }
	void SetFareURL(const string &fareurl) { this->FareURL = fareurl; }
	void SetEmail(const string &email) { this->Email = email; }
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
Agency::Agency(const string &agencyid, const string &name, const string &url, const string &timezone, const string &lang, const string &phone, const string &fareurl, const string &email)
{
	SetAgencyID(agencyid);
	SetName(name);
	SetURL(url);
	SetTimeZone(timezone);
	SetLang(lang);
	SetPhone(phone);
	SetFareURL(fareurl);
	SetEmail(email);
}

Agency::~Agency()
{
}
