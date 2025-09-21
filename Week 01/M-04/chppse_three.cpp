/*
Problem Statement

You will be given an array A and the size of that array N. Additionally, you will be given a sum S. Your task is to determine whether it is possible to select three distinct indexed values from the array such that their summation equals S.

Input Format

First line will contain T, the number of test cases.
First line of each test case will contain N and S.
Second line of each test case will contain the array A.
Constraints

1 <= T <= 100
1 <= N <= 100
1 <= S <= 1000
1 <= A[i] <= 1000 Where 0 <= i < N
Output Format

Output "YES" if it is possible, otherwise output "NO".
Sample Input 0

5
5 10
1 2 3 4 5
5 6
4 2 3 5 4
3 6
2 2 2
4 4
2 8 1 5
1 3
1
Sample Output 0

YES
NO
YES
NO
NO
Explanation 0

In the first test case, we can make 10 by adding 5+4+1. There are other ways too.
In the second test case, it is not possible to make 6 by adding three different indexed values from the array.
In the third case, it is possible to make 6 by using three different indexed values.
*/


#include <bits/stdc++.h>  // Includes all standard C++ libraries (like iostream, vector, algorithm, etc.)
using namespace std;

int main () {
    int t;
    cin >> t;  // Read number of test cases

    // Process each test case
    while (t--) {
        int n, s;
        cin >> n >> s;  // Read number of elements in the array and the target sum

        int arr[n];  // Declare an array of size n

        // Read n integers into the array
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool found = false;  // Flag to check if any triplet with the required sum exists

        // Try all combinations of three different elements (i, j, k) where i < j < k
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    // Check if the sum of these three elements is equal to the target sum s
                    if (arr[i] + arr[j] + arr[k] == s) {
                        found = true;  // Triplet found
                        break;         // Exit innermost loop
                    }
                }
                if (found) break;  // Exit middle loop if triplet found
            }
            if (found) break;  // Exit outermost loop if triplet found
        }

        // Output result based on whether a triplet was found or not
        if (found) {
            cout << "YES" << endl;  // At least one triplet exists that sums to s
        } else {
            cout << "NO" << endl;   // No such triplet found
        }
    }

    return 0;  // End of program
}