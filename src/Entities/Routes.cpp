#include "Routes.h"

//Empty Constructor

Routes::Routes()
{
  ID=null;
  AgencyID=null;
  ShortName=null;
  LongName=null;
  Desc=null;
  Type=null;
  URL=null;
  Color=null;
  TextColor=null;
  SortOrder=null;
}

//constructor with parameters
Routes::Routes(string id,string agencyid,string shortname,string longname,string desc,string type,string url,string color,string textcolor, string sortorder)
{
  ID=id;
  AgencyID=agencyid;
  ShortName=shortname;
  LongName=longname;
  Desc=desc;
  Type=type;
  URL=url;
  Color=color;
  TextColor=textcolor;
  SortOrder=sortorder;

}
