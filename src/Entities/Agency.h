#include <string>

#pragma once

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
	Agency(string line);
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
	void SetTimeZone(string timezone) { TimeZone = timezone; }
	void SetLang(string lang) { Lang = lang; }
	void SetPhone(string phone) { Phone = phone; }
	void SetFareURL(string fareurl) { FareURL = fareurl; }
	void SetEmail(string email) { Email = email; }

};

