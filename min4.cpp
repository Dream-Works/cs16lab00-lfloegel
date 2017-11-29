//test 
// Author: Lara FS
//prints the smallest of user inputted numbers in the command line 

#include <iostream>
#include <cstdlib>

using namespace std;

int min_2(int num1, int num2); 
int min_3(int num1, int num2, int num3);
int min_4(int num1, int num2, int num3, int num4);

int min_2(int num1, int num2) {
	if (num1 < num2) {
		return num1;
	}

	else {
		return num2;
	}
}

int min_3(int num1, int num2, int num3) {
	return min_2(num1, min_2(num2, num3)); //takes the smallest of the two numbers (num2 or num3) and compares it to num1 and takes the smaller of that number)
}

int min_4(int num1, int num2, int num3, int num4) {
	return min_2(num1, min_3(num2, num3, num4)); //does the same as min_3 (could also just use min_2 but it is less work)
}

int main(int argc, char* argv[]) {
	if (argc != 5) {
		cerr << "Usage: " << argv[0] << " num1 num2 num3 num4" << endl; //pritns out message when user does not put in correct arguments 
		cerr << " Prints smallest of the four numbers" << endl;
		exit(0); //stops the program so now you can plug in your numbers 
	}

	int a = atoi(argv[1]); //turns arguement strings into an integer 
	int b = atoi(argv[2]);
	int c = atoi(argv[3]);
	int d = atoi(argv[4]);

	cout << min_4(a, b, c, d) << endl; //prints the min of the four numbers that the user puts in (plugs it into the functions above)
	return 0;
}

//SUCK IT SCIENCE 

