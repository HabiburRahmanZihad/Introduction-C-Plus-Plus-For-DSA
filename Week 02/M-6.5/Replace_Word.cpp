/*
V. Replace Word
time limit per test1 second
memory limit per test256 megabytes
Given a string S
. Print S
 after replacing every sub-string that is equal to "EGYPT" with space.

Input
Only one line contains a string S
 (1≤|S|≤103)
 where |S| is the length of the string and it consists of only uppercase English letters.

Output
Print the result as required above.

Examples
InputCopy
BRITISHEGYPTGHANA
OutputCopy
BRITISH GHANA
InputCopy
ITALYKOREAEGYPTEGYPTALGERIAEGYPTZ
OutputCopy
ITALYKOREA  ALGERIA Z
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;  // Read the input string (only uppercase letters)

    string target = "EGYPT";  // The substring to replace
    string result;            // The output string

    for (size_t i = 0; i < s.length(); ) {
      
        // Check if "EGYPT" starts at position i
        if (s.substr(i, target.length()) == target) {
            result += ' ';     // Replace with a space
            i += target.length(); // Skip past "EGYPT"
        } else {
            result += s[i];    // Otherwise, copy the character
            i++;               // Move to next character
        }
    }

    cout << result << endl;  // Print the result
    return 0;
}
