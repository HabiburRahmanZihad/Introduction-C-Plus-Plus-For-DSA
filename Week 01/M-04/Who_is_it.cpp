/*
Problem Statement

A student has several pieces of information, such as a unique ID, name, section, and total marks. You will be given the information of three students. Your task is to determine and print the details of the student who achieved the highest total marks. In the case of a tie (i.e., two or more students having the same total marks), print the information of the student with the smaller ID.

Input Format

First line will contain T, the number of test cases.
For each test case there will be 3 lines. Each line will contain - ID, Name, Section, Total Marks of a student. The name will contain lowercase English alphabets only.
Constraints

1 <= T <= 1000
1 <= ID <= 3
1 <= |Name| <= 100
'A' <= Section <= 'Z'
0 <= Total Marks <= 100
Output Format

Ouptut the information as asked in the question.
Sample Input 0

3
1 sakib A 50
2 rakib D 96
3 akib C 90
1 sakib A 50
2 rakib D 96
3 akib C 96
1 sakib A 50
2 rakib D 50
3 akib C 40
Sample Output 0

2 rakib D 96
2 rakib D 96
1 sakib A 50
*/

#include <bits/stdc++.h>  // Includes all standard libraries (like iostream, algorithm, etc.)
using namespace std;

// Define a structure to hold student data
struct Student {
    int id;             // Student's ID
    string name;        // Student's name
    char section;       // Student's section (like 'A', 'B', etc.)
    int total_marks;    // Student's total marks
};

// Custom comparison function for sorting students
bool compare(Student a, Student b) {
    // If two students have the same total marks,
    // the one with the smaller ID comes first
    if (a.total_marks == b.total_marks) {
        return a.id < b.id;
    }

    // Otherwise, the student with more marks comes first
    return a.total_marks > b.total_marks;
}

int main () {
    int t;
    cin >> t;  // Read number of test cases

    // Loop through each test case
    while (t--) {
        Student students[3];  // Array to store 3 students

        // Read data for 3 students
        for (int i = 0; i < 3; i++) {
            // Input format: ID Name Section Total_Marks
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].total_marks;
        }

        // Sort the 3 students using our custom compare function
        // This will place the student with highest marks (and lowest ID in case of tie) at index 0
        sort(students, students + 3, compare);

        // Output the top student's info (after sorting, the best one is at index 0)
        cout << students[0].id << " "
            << students[0].name << " "
            << students[0].section << " "
            << students[0].total_marks << endl;
    }

    return 0;  // End of program
}
