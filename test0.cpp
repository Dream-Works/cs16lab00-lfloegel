#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

//void assertEquals(string expected, string actual, string message);
string starL(int width, int height);
//void runTests(void);

string starL(int width, int height)
{

  string result="";

  if ((width<2) || (height < 2))
    return result;  //returns empty string if input is less than 2

  for (int row=1; row<=height-1; row++) {
    result += "*";
    for (int col=2; col<=width; col++) {
      result += " ";
    }
    result += "\n";
  }
 
  for (int col=1; col<=width; col++) {
    result += "*";
  }
  result += "\n";  
  return result;   
}

//void runTests(void) {

  //string starL34Expected = 
    //"*  \n"
    //"*  \n"
    //"*  \n"
    //"***\n" ;
  
  //assertEquals(starL34Expected,starL(3,4),"starL(3,4)");

  //string starL43Expected = 
   // "*   \n"
   // "*   \n"
   // "****\n" ;
  
  //assertEquals(starL43Expected,starL(4,3),"star(4,3)");
  
  //assertEquals("",starL(1,2),"starL(1,2)");
  //assertEquals("",starL(2,1),"starL(2,1)");
//}

//void assertEquals(string expected, string actual, string message="") {
  //if (expected==actual) {
    //cout << "PASSED: " << message << endl;;
  //} else {
   //cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  //}
//}


int main(int argc, char *argv[]){
  
  if (argc!=3) {
    cerr << "Usage: " << argv[0] << " width height" << endl;
    exit(1);
  }
  
  int width = stoi(argv[1]);
  int height = stoi(argv[2]);

  //if (width==-1 && height==-1) {
   // runTests();
   // exit(0);
  //}

  cout << starL(width,height);
  return 0;

}

//SUCK IT SCIENCE
