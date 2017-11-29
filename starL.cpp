//starL
// Author: Lara FS
//creates a L ASCII art with user inputted width and height 

#include <iostream> 
#include <cstdlib>
#include <string>

using namespace std;

string starL(int width, int height);

string starL(int width, int height) {

	string result = "";

	if ((width < 2) || (height < 2)) { //if width or height is less than 2, return an empty string 
		return result;
	}

	//use for loop similar to the block code 

	for (int row=1; row <= height-1; row++) { //makes sure to not put a row on the bottom of L (leaves it for column)
		result += "*"; //pritns out a star for beginning of row 
		for (int column=2; column <= width; column++) { //we are starting at column number 2
			result += " "; //prints a blank part so no stars are printed until the bottom part of the L
		}
		result += "\n"; //goes to next line for the next star to be printed //result = "*" + "\n"
	}

	for (int column=0; column <= width; column++) { //prints the bottom of the L //basically as long as x is <= y, keep on looping
		result += "*"; //HOW COME WE DONT START AT 0?
	}

	result += "\n"; //goes to next line for the ResNet isn't on the same line as the code 
	return result; //stores new result 

}

int main(int argc, char* argv[]) {
	if (argc != 3) {
		cerr << "Usage: " << argv[0] << " width heght" << endl; //displays it if less or more arguments are put in
		exit(1); //ends program so user can put in correct amount of arguments for the next execution
	}

	int width= stoi(argv[1]); //converts integer to stirng
	int height = stoi(argv[2]);

	cout << starL(width, height); //prints out stars in shape 
	return 0; //ends program 
}

//SUCK IT SCIENCE 
