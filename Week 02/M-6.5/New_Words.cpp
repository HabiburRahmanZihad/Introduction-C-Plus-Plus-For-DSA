/*
U. New Words
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print number of times that "EGYPT" word can be formed from S
's characters.

Note: Case of the letters doesn't matter. For example: "Egypt", "egypt" and "eGyPt" are the same.

Input
Only one line contains a string S(1≤|S|≤106)
where |S| is the length of the string and it consists of lowercase and uppercase English letters.

Output
Print the answer required above.

Examples
InputCopy
EgYpTaz
OutputCopy
1
InputCopy
pemigdbeigyypetet
OutputCopy
2
*/

#include <bits/stdc++.h>  // Includes all standard libraries (useful for competitive programming)
using namespace std;

int main() {
    string s;
    cin >> s;  // Read input string (no spaces)

    int count[26] = {0};  // Array to count occurrences of each letter A-Z

    // Convert each character to uppercase and count its frequency
    for (char c : s) {
        count[toupper(c) - 'A']++;  // Map 'A'-'Z' to indices 0-25
    }

    int ans = INT_MAX;  // Initialize answer with a large number

    string target = "EGYPT";  // The word we want to form from the input letters

    // For each letter in "EGYPT", find the minimum frequency
    for (char c : target) {
        ans = min(ans, count[toupper(c) - 'A']);
    }

    cout << ans << endl;  // Output how many complete "EGYPT" words can be formed

    return 0;  // End of program
}