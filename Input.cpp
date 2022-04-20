#include"Input.h"

using namespace std;

string extractValue(int argc, char* argv[], string name) {
	for (int i = 0; i < argc; i++) {
		if (argv[i] == name) {
			if (i + 1 == argc || i + 1 > argc) {
				return "";
			}
			return argv[i + 1];
		}
	}
	return "";
}
bool helper(int argc, char* argv[]) {
	bool flag = false;
	for (int i = 0; i < argc; i++) {
		if (strcmp(argv[i], "-h") == 0) {
			flag = true;
		}
	}
	if (argc == 1 || flag) {
		cout << "Dostepne przelaczniki:" << endl;
		cout << "-i plik wejsciowy z drogami" << endl;
		cout << "-o plik wyjsciowy z trasami spedycyjnymi" << endl;
		cout << "-s nazwa miasta centrali" << endl;
		cout << "-h krotka pomoc" << endl;
		return true;
	}
	else {
		return false;
	}
}
