// Author: Lara FS
//creates a Z ASCII art with user inputted width and height 

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//declares order of functions 

void assertEquals(string expected, string actual, string message);
string stringOfNChars(int n, char c);
string stringOfKSpacesNStars(int k, int n);
string backslash(int length);
string starZ(int width);
void runTests(void);

//function definitions 

string stringOfNChars(int n, char c) {
  string result="";
	for (int i= 0; i<n; i++) { //prints a line *
    result += c; //c refers to the types of characters there ("", *, etc.)
  }
  return result;
}

string stringOfKSpacesNStars(int k, int n, int height) {
  return stringOfNChars(k,' ') + stringOfNChars(n,'*') + stringOfNChars(height - k +1, ' '); //iterates how ever many times 
                                                        //and prints char
}

string backslash(int length) {
  int height = length; 
  string result = "";
  // so this for loop iterates over the rows
  for (int i= height; i>0; i--) { //i spaces then a single star and a newline 
      // i spaces then a single star and a newline
      result += stringOfKSpacesNStars(i,1, height) + "\n";
  }
  return result; 
}

string addLine(int length) {
  string result = "";
  for (int i = 0; i < length; i++) {
    result += "*";
  }
  return result;
}


//main definition 

string starZ(int width) {

  string result = "";

  if (width < 3) {
    return result;
  }

  result += addLine(width); //adds top part of the Z
  result += "\n";
  result += backslash(width-2); //creates the diagonal 
  result += addLine(width); //adds bottom part of the Z
  result += "\n";
  return result;
}

//test code 

void runTests(void) {

	string starZ3Expected =
		"***\n"
		" * \n"
		"***\n";

	assertEquals(starZ3Expected, starZ(3), "starZ(3)");

	string starZ4Expected = 
		"****\n"
		"  * \n"
		" *  \n"
		"****\n";

	assertEquals(starZ4Expected, starZ(4), "starZ(4)");

	assertEquals("", starZ(0), "starZ(0)");
	assertEquals("", starZ(0), "starZ(2)");
}

void assertEquals(string expected, string actual, string message="") {
	if (expected == actual) {
		cout << "PASSED: " << message << endl;;
	}

	else {
		cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
	}
}


//main code 

int main(int argc, char *argv[]) {
  int i;
  int width;

  if (argc!=2) {
      cerr << "Usage: " << argv[0] << " width" << endl;
      exit(1);
  }

  width=atoi(argv[1]);
  cout << starZ(width); 

  if (width == -1) {
  	runTests();
  }

  return 0;
}

//SUCK IT SCIENCE 
