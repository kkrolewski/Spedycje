#include "Neighbours.h"

using namespace std;

bool isInNeighbours(vector<Neighbours>head, string name) {
	for (int i = 0; i < head.size(); i++) {
		if (head[i].name == name) {
			return true;
		}
	}
	return false;
}
