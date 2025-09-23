#include <bits/stdc++.h>
using namespace std;

int main (){
    string s = "Hello world";

    // for (int i = 0; i < s.size(); i++){
    //     cout << s[i] << " ";
    // }

    // cout<< s.begin() << endl; // address of first character
    // cout<< *s.begin() << endl; // first character

    // cout<< s.end() << endl; // address of last character + 1
    // cout<< *(s.end() - 1) << endl; // last character

    // for (string:: iterator it = s.begin(); it != s.end(); it++){
    for (auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }

    return 0;
}