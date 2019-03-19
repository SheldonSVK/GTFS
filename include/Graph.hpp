#include "Feed.hpp"
#include <map>
#include <climits>

class Vertices;

class Edge
{
private:
  Vertices *From, *To;
  Time Arrival, Departure;
  StopTimes *FromStopTimes, *ToStopTimes;
  Trips *Trip;
  Routes *Route;
  Calendar *Days;
  vector<CalendarDates *> Exception;

  bool CheckDay(Date date);
  bool CheckException(Date date);
  bool CheckDate(Date date);

public:
  Edge(Vertices *from, Vertices *to, StopTimes *fromstoptimes, StopTimes *tostoptimes);

  //Gets
  Vertices *GetVerticesFrom() { return this->From; }
  Vertices *GetVerticesTo() { return this->To; }
  StopTimes *GetStopTimesFrom() { return this->FromStopTimes; }
  StopTimes *GetStopTimesTo() { return this->ToStopTimes; }
  Time GetArrival() { return this->Arrival; }
  Time GetDeparture() { return this->Departure; }

  //Sets
  void SetVerticesFrom(Vertices *from) { this->From = from; }
  void SetVerticesTo(Vertices *to) { this->To = to; }
  void SetStopTimesFrom(StopTimes *from) { this->FromStopTimes = from; }
  void SetStopTimesTo(StopTimes *to) { this->ToStopTimes = to; }
  void SetArrival(Time arrival) { this->Arrival = arrival; }
  void SetDeparture(Time departure) { this->Departure = departure; }

  DateTime Weight(DateTime start);
};

class Vertices
{
private:
  Stops *VerticesStop;
  vector<Edge *> VerticesEdges;
  //long Distance;
  Time time;

public:
  explicit Vertices(Stops *stop);
  ~Vertices();

  //Gets
  Stops *GetVerticesStop() { return this->VerticesStop; }
  vector<Edge *> GetVericesEdges() { return this->VerticesEdges; }
  //long GetDistance() { return this->Distance; }
  Time GetTime() { return this->time; }

  //Sets
  void SetVericesStop(Stops *stops) { this->VerticesStop = stops; }
  void SetVerticesEdges(const vector<Edge *> &edges) { this->VerticesEdges = edges; }
  //void SetDistance(long distance) { this->Distance = distance; }
  void SetTime(Time temp) { this->time = temp; }
};

class Graph
{
private:
  map<string, Vertices *> GraphVertices;
  map<string, vector<StopTimes *>> GraphStopTimes;

public:
  explicit Graph(Feed *feed);
  ~Graph();

  void CreateVertices(vector<Stops *> stops);
  Vertices *SearchVertices(const string &stopid);
  vector<Edge *> CreateEdges(Feed *feed);
  void AddEdgeVertices(vector<Edge *> edges);
  vector<StopTimes *> SearchStopTimes(string tripid);
  void SetDistanceMaxLong();
};
