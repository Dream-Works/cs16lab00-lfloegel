//count animals 
// Author: Lara FS
//counts the number of animals, ducks, and non-ducks and returns the number of each

#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

//animal count = total amount 
//duck count = amount of times duck appears
//non duck count = animal - duck

int main(int argc, char *argv[]) {

	ifstream ifs; 
	string thisLine;

	int duckCount = 0;
	int animalCount = 0;
	int otherCount = 0;

	if (argc != 2) {
		cerr << "Usage: " << argv[0] << " inputFile" << endl;
		exit(1);
	}

	ifs.open(argv[1]);

	if (ifs.fail()) {
		cerr << "Could not open file:" << argv[1] << endl;
		exit(2);
	}

	getline(ifs, thisLine);
	while (!ifs.eof()) {
		if (thisLine == "duck") {
			duckCount ++;
		}

		if (thisLine != "duck") {
			otherCount ++;
		}

		animalCount = duckCount + otherCount;

		getline(ifs, thisLine);
	}

	cout << "Report for " << argv[1] << ":\n";
	cout << "   Animal count:    " << animalCount << endl;
	cout << "   Duck count:      " << duckCount << endl; //counts wrong if there is an extra space on the next line
	cout << "   Non duck count:  " << otherCount << endl; //counts spaces that are on separate lines

	return 0;
}