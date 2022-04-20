#include "File.h"

using namespace std;

map<string, Cities> readFromFile(const string& fileName) {
	fstream file;
	map<string, Cities> temp;
	vector<Neighbours> emptyNeighboursVector;
	file.open(fileName, ios::in);
	if (file.good()) {
		while (!file.eof()) {
			string city1, city2, line;
			int distance;
			getline(file, line);
			stringstream linestream;
			linestream << line;
			if (linestream >> city1 >> city2 >> distance) {
				regex string("^[A-Za-z]+$");
				if (regex_match(city1, string) && regex_match(city2, string)) {
					Cities obj;
					obj.name = city1;
					obj.neighboursVector = emptyNeighboursVector;
					temp.insert({ city1, obj });
					obj.name = city2;
					obj.neighboursVector = emptyNeighboursVector;
					temp.insert({ city2,obj });
					if (!isInNeighbours(temp.find(city1)->second.neighboursVector, city2) && temp.find(city1)->first != city2) {
						Neighbours obj;
						obj.distance = distance;
						obj.name = city2;
						temp.find(city1)->second.neighboursVector.push_back(obj);
					}
					if (!isInNeighbours(temp.find(city2)->second.neighboursVector, city2) && temp.find(city2)->first != city1) {
						Neighbours obj;
						obj.distance = distance;
						obj.name = city1;
						temp.find(city2)->second.neighboursVector.push_back(obj);
					}
				}
			}
		}
	}
	file.close();
	return temp;
}
void saveToFile(map<string, DijkstraResult> result, const string& fileName, string capital) {
	fstream file;
	file.open(fileName, fstream::out);
	if (file.good()) {
		for (map<string, DijkstraResult>::iterator iterator = result.begin(); iterator != result.end(); iterator++)
			if (iterator->first != capital) {
				string x = findPath(result, iterator->first);
				file << x << ": " << iterator->second.weight << endl;
			}
	}
	else {
		cout << "Blednie podana nazwa pliku wyjsciowego." << endl;
	}
	file.close();
}