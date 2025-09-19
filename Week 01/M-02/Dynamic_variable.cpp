#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 10;

    int *p = new int; // dynamically allocated memory
    *p = 20;          // assign value

    cout << "Value of a: " << a << endl;
    cout << "Value pointed by p: " << *p << endl;

    delete p; // free dynamically allocated memory
    return 0;
}