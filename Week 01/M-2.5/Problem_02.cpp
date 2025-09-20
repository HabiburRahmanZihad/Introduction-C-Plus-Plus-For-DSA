/*
Question:
Take an integer array A of size N as input. Then take an integer M as input.
You need to take an array B of size M and copy all elements of array A to array B.
Delete the array A and then take input of the rest of the elements of array B.
After that print array B.

Sample Input
5
1 2 3 4 5
10
6 7 8 9 10

Sample Output
1 2 3 4 5 6 7 8 9 10

sample Input
3
10 20 10
5
60 40

Sample Output
10 20 10 60 40
*/

#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;

    int* arrA = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arrA[i];
    }

    int m;
cin >> m;

if (m < n) {
    cout << "Error: M should be greater than or equal to N" << endl;
    delete[] arrA;
    return 1;
}

int* arrB = new int[m];

    for (int i = 0; i < n; i++) {
        arrB[i] = arrA[i];
    }

    delete[] arrA;

    for (int i = n; i < m; i++) {
        cin >> arrB[i];
    }
    for (int i = 0; i < m; i++) {
        cout << arrB[i] << " ";
    }
    cout << endl;
    delete[] arrB;
    return 0;
}