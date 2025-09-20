#include <bits/stdc++.h>
using namespace std;

int main (){
    int n, m;
    cin >> n >> m;

    int arr[n][m]; // Declaration of 2D Array

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    arr[2][3] = 1000; // Update value at index (2, 3)

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}