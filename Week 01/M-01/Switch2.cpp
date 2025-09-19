#include <iostream>
using namespace std;

int main (){

  int x;
  cin >> x;

  switch (x % 2)
  {
    case 0:
      cout << "even (jor)" << endl;
      break;
    case 1:
      cout << "odd (bijor)" << endl;
      break;

    default:
      cout << "Invalid Input" << endl;
      break;
  }


  return 0;
}