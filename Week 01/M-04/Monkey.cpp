/*
Problem Statement:

Amena has just learned alphabets. She can read write from a to z only in lowercase. But, Amena always writes in alphabetic order (alphabetic order means from a to z in sorted order) what she saw. Also she writes a line as a word. For example, she writes monkey as ekmnoy. Her mother wants to test her reading and writing skills. Her mother gave her some lines, can you tell what she will write?

Note: Input will be given by EOF.

Input Format

Input consist of a line S. The line will contain lowercase letters and spaces. It is possible that there are multiple spaces together and the line end with spaces.
Constraints

1 <= |S| <= 10^5
Output Format

Output what Amena will write.
Sample Input 0

monkey
i love flower
Sample Output 0

ekmnoy
eefilloorvw
*/


#include <bits/stdc++.h>  // Includes all standard C++ libraries
using namespace std;

int main () {
    string line;  // To store each line of input

    // Read input line-by-line until EOF (End Of File)
    while (getline(cin, line)) {
        string result = "";  // To store the line without spaces

        // Loop through each character in the line
        for (int i = 0; i < line.size(); i++) {
            // If the character is not a space, add it to the result
            if (line[i] != ' ') {
                result += line[i];
            }
        }

        // Sort the characters in the result string alphabetically
        sort(result.begin(), result.end());

        // Print the sorted string
        cout << result << endl;
    }

    return 0;  // Exit the program
}
