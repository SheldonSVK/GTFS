#include <string>

using namespace std;

class Routes
{
private:
	string ID;
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
	Routes(string id,string agencyid,string shortname,string longname,string desc,string type,string url,string color,string textcolor, string sortorder);
	~Routes();

	//Get
	string GetID() { return ID; }
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
	void SetID(string id) { ID = id; }
	void SetAgencyID(string agencyid) { AgencyID = agencyid; }
	void SetShortName(string shortname) { ShortName = shortname; }
	void SetLongName(string longname) { LongName = longname; }
	void SetDesc(string desc) { Desc = desc; }
	void SetType(string type) { Type = type; }
	void SetURL(string url) { URL = url; }
	void SetColor(string color) { Color = color; }
	void SetTextColor(string textcolor) { TextColor = textcolor; }
	void SetSortOrder(string sortorder) { SortOrder = sortorder; }
};
