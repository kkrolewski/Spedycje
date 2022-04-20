#include "DijkstraResult.h"

using namespace std;

map<string, DijkstraResult> setCapital(map<string, DijkstraResult> head, string name) {
	head.find(name)->second.weight = 0;
	return head;
}
bool isVisited(vector<string> visitedCities, string name) {
	if (std::count(visitedCities.begin(), visitedCities.end(), name)) {
		return true;
	}
	else {
		return false;
	}
}
DijkstraResult findCityWithShortestPath(map<string, DijkstraResult> pathLengths, vector<string> visitedCities) {
	DijkstraResult shortest =DijkstraResult{ "","", INT_MAX };
	for (map<string, DijkstraResult>::iterator iterator = pathLengths.begin(); iterator != pathLengths.end(); iterator++) {
		if (!isVisited(visitedCities, iterator->second.vertexName) && iterator->second.weight < shortest.weight) {
			shortest.vertexName = iterator->second.vertexName;
			shortest.weight = iterator->second.weight;
		}
	}
	return shortest;
}
string findPath(map<string, DijkstraResult> Tab, string name) {
	DijkstraResult current = Tab.find(name)->second;
	if (current.previous != "") {
		return findPath(Tab, current.previous) + " -> " + current.vertexName;
	}
	return current.vertexName;
}
