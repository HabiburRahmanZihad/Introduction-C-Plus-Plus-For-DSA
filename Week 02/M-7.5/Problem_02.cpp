/*
Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N.
Student
{
	name;
	roll;
	marks;
}
Your task is to reverse the array and print the array of Student.
Note: name will not contain any spaces.


Sample Input

5
Asif 29 95
Sakib 55 89
Zubair 57 93
Ahsan 39 86
Joy 12 99
Sample Output
Joy 12 99
Ahsan 39 86
Zubair 57 93
Sakib 55 89
Asif 29 95




*/

#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
        string name;
        int roll;
        int marks;
};

int main (){

    int n;
    cin>>n;
    Student arr[n];
    for(int i=0; i<n; i++){
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        arr[i] = Student{name, roll, marks};
    }

    for(int i=n-1; i>=0; i--){
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }

    return 0;
}