#include "Cities.h"
#include "DijkstraResult.h"
#include "Neighbours.h"
#include "Dijkstra.h"
#include "File.h"
#include "Input.h"
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>

using namespace std;

int main(int argc, char* argv[]) {
	if (helper(argc, argv)) {
		return 0;
	}
	string input = extractValue(argc, argv, "-i");
	string output = extractValue(argc, argv, "-o");
	string capital = extractValue(argc, argv, "-s");
	map<string, Cities> head = readFromFile(input);
	if (!head.empty()) {
		map<string, DijkstraResult> result = dijkstra(head, capital);
		if (!result.empty()) {
			saveToFile(result, output, capital);
		}
		result.clear();
	}
	else {
		cout << "Blad w odczycie pliku, sprawdz czy plik jest poprawnie zalaczony i czy nie jest pusty.";
	}
	head.clear();
}
