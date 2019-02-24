#include <string>

using namespace std;

class Shapes
{
private:
  string ShapeID;
  string ShapePtLat;
  string ShapePtLon;
  string ShapePtSequence;
  string ShapeDistTraveled;

public:
  Shapes();
  Shapes(const string &shapeid, const string &shapeptlat, const string &shapeptlon, const string &shapeptsequence, const string &shapedisttraveled);
  ~Shapes();

  //Gets
  string GetShapeID() { return this->ShapeID; }
  string GetShapePtLat() { return this->ShapePtLat; }
  string GetShapePtLon() { return this->ShapePtLon; }
  string GetShapePtSequence() { return this->ShapePtSequence; }
  string GetShapeDistTraveled() { return this->ShapeDistTraveled; }

  //Sets
  void SetShapeID(const string &shapeid) { this->ShapeID = shapeid; }
  void SetShapePtLat(const string &shapeptlat) { this->ShapePtLat = shapeptlat; }
  void SetShapePtLon(const string &shapeptlon) { this->ShapePtLon = shapeptlon; }
  void SetShapePtSequence(const string &shapeptsequence) { this->ShapePtSequence = shapeptsequence; }
  void SetShapeDistTraveled(const string &shapedisttraveled) { this->ShapeDistTraveled = shapedisttraveled; }
};

Shapes::Shapes()
{
  this->ShapeID.clear();
  this->ShapePtLat.clear();
  this->ShapePtLon.clear();
  this->ShapePtSequence.clear();
  this->ShapeDistTraveled.clear();
}

Shapes::Shapes(const string &shapeid, const string &shapeptlat, const string &shapeptlon, const string &shapeptsequence, const string &shapedisttraveled)
{
  SetShapeID(shapeid);
  SetShapePtLat(shapeptlat);
  SetShapePtLon(shapeptlon);
  SetShapePtSequence(shapeptsequence);
  SetShapeDistTraveled(shapedisttraveled);
}

Shapes::~Shapes()
{
}
