#include <string>

using namespace std;

class Routes
{
  private:
	string RouteID;
	string AgencyID;
	string ShortName;
	string LongName;
	string Desc;
	string Type;
	string URL;
	string Color;
	string TextColor;
	string SortOrder;

  public:
	Routes();
	Routes(const string &routeid, const string &agencyid, const string &shortname, const string &longname, const string &desc, const string &type, const string &url, const string &color, const string &textcolor, const string &sortorder);
	~Routes();

	//Get
	string GetRouteID() { return this->RouteID; }
	string GetAgencyID() { return AgencyID; }
	string GetShortName() { return ShortName; }
	string GetLongName() { return LongName; }
	string GetDesc() { return Desc; }
	string GetType() { return Type; }
	string GetURL() { return URL; }
	string GetColor() { return Color; }
	string GetTextColor() { return TextColor; }
	string GetSorOrder() { return SortOrder; }

	//Set
	void SetRouteID(const string &routeid) { this->RouteID = routeid; }
	void SetAgencyID(const string &agencyid) { AgencyID = agencyid; }
	void SetShortName(const string &shortname) { ShortName = shortname; }
	void SetLongName(const string &longname) { LongName = longname; }
	void SetDesc(const string &desc) { Desc = desc; }
	void SetType(const string &type) { Type = type; }
	void SetURL(const string &url) { URL = url; }
	void SetColor(const string &color) { Color = color; }
	void SetTextColor(const string &textcolor) { TextColor = textcolor; }
	void SetSortOrder(const string &sortorder) { SortOrder = sortorder; }
};

//Empty Constructor

Routes::Routes()
{
	this->RouteID.clear();
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
Routes::Routes(const string &routeid, const string &agencyid, const string &shortname, const string &longname, const string &desc, const string &type, const string &url, const string &color, const string &textcolor, const string &sortorder)
{
	SetRouteID(routeid);
	SetAgencyID(agencyid);
	SetShortName(shortname);
	SetLongName(longname);
	SetDesc(desc);
	SetType(type);
	SetURL(url);
	SetColor(color);
	SetTextColor(textcolor);
	SetSortOrder(sortorder);
}
