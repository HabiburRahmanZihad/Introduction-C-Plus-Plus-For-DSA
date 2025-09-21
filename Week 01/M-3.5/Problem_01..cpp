/*
Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.


*/

#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    char section;
    int math_marks;
    string cls;

    Student(string n, int r, char s, int m, string c){
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main (){

    Student s1("Alice", 1, 'A', 95, "10th");
    Student s2("Bob", 2, 'B', 85, "10th");
    Student s3("Charlie", 3, 'C', 90, "10th");

    if(s1.math_marks > s2.math_marks && s1.math_marks > s3.math_marks){
        cout << "Highest marks: " << s1.name << " with " << s1.math_marks << " marks." << endl;
    }
    else if(s2.math_marks > s1.math_marks && s2.math_marks > s3.math_marks){
        cout << "Highest marks: " << s2.name << " with " << s2.math_marks << " marks." << endl;
    }
    else{
        cout << "Highest marks: " << s3.name << " with " << s3.math_marks << " marks." << endl;
    }

    return 0;
}