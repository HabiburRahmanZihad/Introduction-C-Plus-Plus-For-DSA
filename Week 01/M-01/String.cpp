#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;
    string str;

    cin.ignore();  // Clear the newline character from the input buffer

    // cin >> str; // This will read input only until the first whitespace
    // cout << str; // If input is "hello World", it will only read "hello"

    getline(cin, str);

    cout << "You entered number: " << x << endl;
    cout << "You entered string: " << str << endl;

    return 0;
}


// int main() {
//     int x;
//     cin >> x;

//     char str[100];

//     cin.ignore();  // Clear the newline character from the input buffer
//     cin.getline(str, 100);

//     cout << "You entered number: " << x << endl;
//     cout << "You entered string: " << str << endl;

//     return 0;
// }