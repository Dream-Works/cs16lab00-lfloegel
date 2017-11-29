//block
// Author: Lara FS
//creates a block of X's with an user input for the number of rows and columns 

#include <iostream>
#include <string>

using namespace std;

int main() {

	int row;
	int column; //defines rows and columns as integers //defines i as integer 
	
	cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1 
	cout.setf(ios::showpoint); // Always display the decimal point

	while (column > 0) {
		cout << "Enter number of rows and columns:" << endl; //question for users 
		cin >> row >> column; //asks for user input 

		while (row > 0 && column > 0) { //works only when input for row > 0 
			for(int i = 1; i <= column; i++) { 
				cout << "X.";
			}
			row--; //subtracts number of rows each time
			cout << endl; //goes to the next line for the next loop
		}
	}
}

//TAKE THAT	 SCIENCE 
