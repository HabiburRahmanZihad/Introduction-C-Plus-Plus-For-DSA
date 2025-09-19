#include <bits/stdc++.h>
using namespace std;

int main() {

    // int a[5]; // declare array of size 5 - static memory allocation
    int *a = new int[5]; // declare array of size 5 - dynamic memory allocation

    for (int i = 0; i < 5; i++) {
        cin >> a[i]; // input values
    }

    for (int i = 0; i < 5; i++) {
        cout << a[i] << endl; // print values
    }

    delete[] a; // free dynamically allocated memory

    return 0;
}