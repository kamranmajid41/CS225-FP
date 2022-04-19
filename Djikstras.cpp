#include "Djikstras.h"
#include <map>
#include <climits>
#include <stack>

using namespace std;

/* 
*	vertexExists(string node)
*	Description: This function ensures that an airport exists in the adjacency list.
*	input: node -- the name of the airport as a string
*	return: boolean that indicate whether the vertex exist or not
*/
bool Djikstras::vertexExists(string node) {} 

/* 
*	getShortestDistance()
*	Description: getter function
*	return: gets the path distance from the starting airport to the destination airport
*/
double Djikstras::getShortestDistance() const {

/* 
*	getPathVertices()
*	Description: getter function
*	return: gets all of the airports along the path
*/
vector<string> Djikstras::getPathVertices() const {}

/* 
*	getAdjacent(string source)
*	Description: This function finds all of the neighboring airports to the input airport 
    and returns a vector of the neighboring airport and its flight distance from the input airport.
*	input: source -- the name of the airport as a string
*	return: a vector of pairs of neighboring airports and their respective distances from the input airport
*/
vector<pair<int, double>> Djikstras::getAdjacent(string source) {} 

/* 
*	Djikstras(Graph g, string StartAirport, string DestAirport)
*	Description: Implementation of Djikstra's algorithm for finding the shortest path between airports.
*	input: g -- Graph of the connecting airports
*	       StartAirport -- the starting airport
*	       DestAirport -- the destination airport
*	return: N/A
*/
Djikstras::Djikstras(Graph g, string StartAirport, string DestAirport) {} 

