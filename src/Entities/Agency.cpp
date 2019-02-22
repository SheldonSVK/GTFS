#include "Agency.h"

//Empty constructor
Agency::Agency()
{
  ID=null;
  Name=null;
  URL=null;
  TimeZone=null;
  Lang=null;
  Phone=null;
  FareURL=null;
  Email=null;
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

/*
 * Constructor with line parameters
 *
*/
