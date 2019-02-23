#include "Agency.h"

//Empty constructor
Agency::Agency()
{
  ID.clear();
  Name.clear();
  URL.clear();
  TimeZone.clear();
  Lang.clear();
  Phone.clear();
  FareURL.clear();
  Email.clear();
}

//Constructor with all parameters
Agency::Agency(string id,string name,string url,string timezone,string lang,string phone,string fareurl,string email)
{
  ID=id;
  Name=name;
  URL=url;
  TimeZone=timezone;
  Lang=lang;
  Phone=phone;
  FareURL=fareurl;
  Email=email;
}
