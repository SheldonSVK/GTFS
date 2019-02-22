#include <string>

#pragma once

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
	Routes* Next;
	Routes* Prev;

public:
	Routes();
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
	Routes* GetNext() { return Next; }
	Routes* GetPrev() { return Prev; }

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
	void SetNext(Routes* next) { Next = next; }
	void SetPrev(Routes* prev) { Prev = prev; }
};

