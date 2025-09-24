#include <bits/stdc++.h>
using namespace std;

class Student{4
    public:
    string name;
    int age;
    int math;
    int physics;

    Student(string name, int age, int math = 0, int physics = 0){
        this->name = name;
        this->age = age;
        this->math = math;
        this->physics = physics;
    }
    void hello(){
        cout << "Hello, " << name << endl;
    }
    void totalMark(){
        cout<< name << " getTotal Mark: " << math + physics << endl;
    }
};

int main (){

    Student sakib("sakib", 20, 85, 90);
    sakib.hello();
    sakib.totalMark();

    Student rakib("rakib", 20);
    rakib.hello();
    rakib.totalMark();

    return 0;
}