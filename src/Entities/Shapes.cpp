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
    Shapes(string shapeid, string shapeptlat, string shapeptlon, string shapeptsequence, string shapedisttraveled);
    ~Shapes();

    //Gets
    string GetShapeID() { return this->ShapeID; }
    string GetShapePtLat() { return this->ShapePtLat; }
    string GetShapePtLon() { return this->ShapePtLon; }
    string GetShapePtSequence() { return this->ShapePtSequence; }
    string GetShapeDistTraveled() { return this->ShapeDistTraveled; }

    //Sets
    void SetShapeID(string shapeid) { this->ShapeID = shapeid; }
    void SetShapePtLat(string shapeptlat) { this->ShapePtLat = shapeptlat; }
    void SetShapePtLon(string shapeptlon) { this->ShapePtLon = shapeptlon; }
    void SetShapePtSequence(string shapeptsequence) { this->ShapePtSequence = shapeptsequence; }
    void SetShapeDistTraveled(string shapedisttraveled) { this->ShapeDistTraveled = shapedisttraveled; }
};

Shapes::Shapes()
{
    this->ShapeID.clear();
    this->ShapePtLat.clear();
    this->ShapePtLon.clear();
    this->ShapePtSequence.clear();
    this->ShapeDistTraveled.clear();
}

Shapes::Shapes(string shapeid, string shapeptlat, string shapeptlon, string shapeptsequence, string shapedisttraveled)
{
    this->ShapeID = shapeid;
    this->ShapePtLat = shapeptlat;
    this->ShapePtLon = shapeptlon;
    this->ShapePtSequence = shapeptsequence;
    this->ShapeDistTraveled = shapedisttraveled;
}

Shapes::~Shapes()
{
}
