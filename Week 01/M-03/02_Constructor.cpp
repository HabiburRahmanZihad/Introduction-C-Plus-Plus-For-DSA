#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool isEnrolled;
    double gpa;

    // Constructor
    Student(string studentName, int studentAge, bool enrollmentStatus, double studentGpa){
        name = studentName;
        age = studentAge;
        isEnrolled = enrollmentStatus;
        gpa = studentGpa;
    }
};


int main (){

    Student student1("Alice", 20, true, 3.8);
    Student student2("Bob", 22, false, 3.5);

    cout << student1.name << " " << student1.age << " " << student1.isEnrolled << " " << student1.gpa << endl;
    cout << student2.name << " " << student2.age << " " << student2.isEnrolled << " " << student2.gpa << endl;
    return 0;
}