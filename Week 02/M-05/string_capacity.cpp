#include <bits/stdc++.h>
using namespace std;

int main (){
    string s = "Hello, World!";
    // cout << s << endl;
    // cout << "Size: " << s.size() << endl;
    // cout << "Max Size: " << s.max_size() << endl;
    // cout << "Capacity: " << s.capacity() << endl;

    // s.clear();
    // // cout << "Clear: " << s.clear() << endl;
    // // if (s.empty()) {
    // if (s.size() == 0) {
    //     cout << "String is empty" << endl;
    // } else {
    //     cout << "String is not empty" << endl;
    // }

    s.resize(18, 'x');
    cout << s << endl;

    return 0;
}