//starC
// Author: Lara FS
//creates a C ASCII art with user inputted width and height 

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void assertEquals(string expected, string actual, string message);
string starC(int width, int height);
void runTests(void);

string starC(int width, int height) {

	string result = "";

	if (width < 2 || height < 3) {
		return result;
	}

	for (int row = 1; row <=width; row++) { //prints top part of C
		result += "*";
	}

	result += "\n";

	for (int col = 3; col <= height; col++) { //the int col=3 bascially means height-2
		result += "*";
		for (int col = 2; col <= width; col++){
			result += " ";
		}
		result += "\n";
	}

	for (int row = 1; row <= width; row++) { //prints bottom part of C
		result += "*";
	}

	result += "\n";
	return result;

}

void runTests(void) {

	string starC34Expected = 
		"***\n"
		"*  \n"
		"*  \n"
		"***\n";

	assertEquals(starC34Expected, starC(3,4), "starC(3,4)");

	string starC53Expected =
		"*****\n"
		"*    \n"
		"*****\n";

	assertEquals(starC53Expected, starC(5,3), "starC(5,3)");

	assertEquals("", starC(2,1), "starC(2,1)");
	assertEquals("", starC(2,2), "starC(2,2)");

	string starC23Expected =
		"**\n"
		"* \n"
		"**\n";

	assertEquals(starC23Expected, starC(2,3), "starC(2,3)");
}

void assertEquals(string expected, string actual, string message = "") {
	if (expected == actual) {
		cout << "PASSED: " << message << endl;;
	}

	else {
		cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
	}
}



int main(int argc, char* argv[]) {
	if (argc != 3) {
		cerr << "Usage: " << argv[0] << " width height" << endl;
		exit(1);
	}

	int width = stoi(argv[1]);
	int height = stoi(argv[2]);

	if ((width == -1) && (height == -1)) {
		runTests();
	}

	cout << starC(width, height);
	return 0;
}

//SUCK IT SCIENCE 
