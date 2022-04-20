#include "Dijkstra.h"

using namespace std;

map<string, DijkstraResult> dijkstra(map<string, Cities> citiesMap, string capital) {
	map<string, DijkstraResult> tab;
	if (citiesMap.count(capital) == 1) {
		int citiesLength = 0;
		for (auto iterator = citiesMap.begin(); iterator != citiesMap.end(); iterator++) {
			DijkstraResult obj;
			obj.vertexName = iterator->first;
			obj.previous = "";
			obj.weight = INT_MAX;
			tab.insert({ iterator->first , obj });
			citiesLength++;
		}
		tab=setCapital(tab, capital);
		vector<string> visitedCities;
		for (int i = 0; i < citiesLength; i++) {
			DijkstraResult currentCity = findCityWithShortestPath(tab, visitedCities);
			vector<Neighbours> neighbours = citiesMap.find(currentCity.vertexName)->second.neighboursVector;
			for (vector<Neighbours>::iterator iterator = neighbours.begin(); iterator != neighbours.end(); iterator++) {
				int newWeight = currentCity.weight + iterator->distance;
				if (newWeight < tab.find(iterator->name)->second.weight) {
					tab.find(iterator->name)->second.weight = newWeight;
					tab.find(iterator->name)->second.previous = currentCity.vertexName;
				}
			}
			visitedCities.push_back(currentCity.vertexName);
		}
		visitedCities.clear();
		return tab;
	}
	else {
		cout << "Blednie podana nazwa centrali, popraw sie i uruchom program ponownie." << endl;
		return tab;
	}
}