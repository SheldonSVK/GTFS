#include <string>


using namespace std;

class Agency
{
private:
	string ID;
	string Name;
	string URL;
	string TimeZone;
	string Lang;
	string Phone;
	string FareURL;
	string Email;

public:
	Agency();
	Agency(string id,string name,string url,string timezone,string lang,string phone,string fareurl,string email);
	~Agency();

	//Getery
	string GetID() { return this->ID; }
	string GetName() { return this->Name; }
	string GetURL() { return this->URL; }
	string GetTimeZone() { return this->TimeZone; }
	string GetLang() { return this->Lang; }
	string GetPhone() { return this->Phone; }
	string GetFareURL() { return this->FareURL; }
	string GetEmail() { return this->Email; }

	//Settery
	void SetID(string id) { this->ID = id; }
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
  this->ID.clear();
  this->Name.clear();
  this->URL.clear();
  this->TimeZone.clear();
  this->Lang.clear();
  this->Phone.clear();
  this->FareURL.clear();
  this->Email.clear();
}

//Constructor with all parameters
Agency::Agency(string id,string name,string url,string timezone,string lang,string phone,string fareurl,string email)
{
  this->ID=id;
  this->Name=name;
  this->URL=url;
  this->TimeZone=timezone;
  this->Lang=lang;
  this->Phone=phone;
  this->FareURL=fareurl;
  this->Email=email;
}
