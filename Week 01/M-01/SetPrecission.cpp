#include <iostream>
#include <iomanip>
using namespace std;

int main (){
  double a = 3.141592653589793238;

  cout << a << endl;

  cout << fixed; // for after decimal point
  cout << setprecision(3) << a << endl; // after decimal point 3 digit
  cout << setprecision(4) << a << endl; // after decimal point 4 digit
  cout << setprecision(5) << a << endl; // after decimal point 5 digit
  cout << setprecision(6) << a << endl; // after decimal point 6 digit
}