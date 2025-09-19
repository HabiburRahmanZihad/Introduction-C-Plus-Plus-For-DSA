#include <iostream>
#include <algorithm>
using namespace std;

int main (){

  int x,y;
  cin >> x >> y;

  cout << "Minimum: " << min(x, y) << endl;

  cout << "Maximum: " << max(x, y) << endl;

  swap(x, y);

  cout << "After Swap: " << x << " " << y << endl;

  cout << x/y << endl;
  return 0;
}