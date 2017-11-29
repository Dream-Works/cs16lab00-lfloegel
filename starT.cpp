// Author: Lara FS
//creates a T ASCII art with user inputted width and height 

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;


void assertEquals(string expected, string actual, string message);
string starT(int width, int height);
void runTests(void);

string starT(int width, int height) {

  string result = "";
  
  if (((width%2 != 1) || (width < 3)) || (height < 2)) { //if requirements are not met, show empty string 
    return result;
  }

  for (int row = 1; row <= width; row++) { //create a (width) line of needed stars 
    result += "*";
  }

  for (int row = 1; row <= 1; row++) { //creates needed empty rows to put height (columns) in
    result += "\n";

    for (int col = 1; col <= height - 1; col++) {

      for (int column=2; column <= (((width-1)/2)+1); column++) { //we are starting at column number 2
      result += " "; //prints a blank part so no stars are printed (helps provide spaces for the stars)
      }
       result += "*"; //prints the stars and goes to new line
       for (int column = 2; column <= ((((width-1)/2))+1); column++) { //prints blank spaces after *
        result += " ";
       }
       result += "\n";
    }

  }

  return result;
}

void runTests(void) {

  string starT34Expected = 
    "***\n"
    " * \n"
    " * \n"
    " * \n";

  assertEquals(starT34Expected, starT(3,4), "starT(3,4)");

  string starT53Expected =
    "*****\n"
    "  *  \n"
    "  *  \n";

  assertEquals(starT53Expected, starT(5,3), "starT(5,3)");

  string starT72Expected = 
    "*******\n"
    "   *   \n";

  assertEquals(starT72Expected, starT(7,2), "starT(7,2)");

  assertEquals("", starT(1,2), "starT(1,2)");
  assertEquals("", starT(5,1), "starT(5,1)");
  assertEquals("", starT(4,2), "starT(4,2)");
  assertEquals("", starT(6,2), "starT(6,2)");
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

  cout << starT(width, height);
  return 0;
}

//SUCK IT SCIENCE
