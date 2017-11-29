//pi
// Author: Lara FS
//calculates the approximate value of pi using user inputted terms 

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {

    int n, i;

    cout.setf(ios::fixed); 	   // Display in fixed point notation. For example, display 1e-1 as 0.1 
	cout.setf(ios::showpoint); // Always display the decimal point.
	cout.precision(3); 

	while (n >= 0) {
    	cout << "Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):" << endl;
    	cin >> n;

    	 double pi = 0;

    	if (n >= 0) {
    		for (int i = 0; i <= n; i++) {
				pi += 4.00 * (pow(-1, i))/((2 * i) + 1); 
			}

			if (n == 0) {
				cout << "The approximate value of pi using " << n + 1 << " term is: " << pi << endl;

			}

			if (n >= 1) {
				cout << "The approximate value of pi using " << n + 1 << " terms is: " << pi << endl;
			}

		}
		else {
			return 0;
		}

    }
    
}

		//if (n == 0) {
			//cout << "The approximate value of pi using " << n + 1 << " term is: " << pi << endl;

		//}

		//if (n >= 1) {
			//cout << "The approximate value of pi using " << n + 1 << " terms is: " << pi << endl;
		//}

		//else {
    		//return 0;
	//	}

//SUCK IT SCIENCE
