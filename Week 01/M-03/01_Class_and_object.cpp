#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    bool isEnrolled;
    double gpa;
};

int main (){

    Student student1, student2;

    student1.name = "Alice mike";
    student1.age = 20;
    student1.isEnrolled = true;
    student1.gpa = 3.8;

    student2.name = "Bob";
    student2.age = 22;
    student2.isEnrolled = false;
    student2.gpa = 3.5;

    cout << student1.name << " " << student1.age << " " << student1.isEnrolled << " " << student1.gpa << endl;
    cout << student2.name << " " << student2.age << " " << student2.isEnrolled << " " << student2.gpa << endl;
    return 0;
}