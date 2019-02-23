#include "Routes.h"

//Empty Constructor

Routes::Routes()
{
  ID.clear();
  AgencyID.clear();
  ShortName.clear();
  LongName.clear();
  Desc.clear();
  Type.clear();
  URL.clear();
  Color.clear();
  TextColor.clear();
  SortOrder.clear();
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
