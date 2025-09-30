/*
Question: Take a sentence S as input and then take another string word X as input. Then count how many times the word X appeared in the sentence. The words in the sentence are separated by spaces.



Sample Input

Sanju Samson shamanta samson jessica Bhatta Asif John takla john abraham john baby Shark tank
john
Sample Output
2


*/

#include <bits/stdc++.h>  // Includes all standard libraries
using namespace std;

int main () {
    string s;
    getline(cin, s);       // Read a full line of text (can include spaces)

    string word;
    cin >> word;           // Read the word to search for

    stringstream ss(s);    // Convert the string into a stream to split it into words
    string temp;
    int count = 0;

    // Loop through each word extracted from the stream
    while(ss >> temp){
        if(temp == word){  // If the current word matches the target word
            count++;       // Increase the count
        }
    }

    cout << count << endl; // Output the total count of the word
    return 0;
}