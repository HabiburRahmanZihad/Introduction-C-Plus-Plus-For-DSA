/*
Problem Statement

You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

Input Format

First line will contain N.
Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
Constraints

1 <= N <= 100
1 <= |nm| <= 100 and will contain only English alphabets.
1 <= cls <= 10
'A' <= s <= 'Z'
1 <= id <= 1000
0 <= math_marks, eng_marks <= 100
Output Format

Output the students data in descending order according to the total marks.
Sample Input 0

5
Munna 8 D 25 50 30
Shojoy 9 E 26 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99
Sample Output 0

Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 26 40 50
Munna 8 D 25 50 30
Sample Input 1

6
Munna 8 D 30 50 40
Shojoy 9 E 25 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99
Khadija 8 E 26 40 50
Sample Output 1

Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 25 40 50
Khadija 8 E 26 40 50
Munna 8 D 30 50 40
*/

#include <bits/stdc++.h>
using namespace std;

// Define a structure to hold student data
class Student {
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;
};

// Function to calculate total marks for a student
int totalMarks(Student s) {
    return s.math_marks + s.eng_marks;
}

// Function to sort students based on total marks (desc), then id (asc)
void sortStudents(Student arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int total_i = totalMarks(arr[i]);
            int total_j = totalMarks(arr[j]);

            // First criteria: descending total marks
            if (total_i < total_j) {
                swap(arr[i], arr[j]);
            }
            // If total marks are equal, sort by ascending ID
            else if (total_i == total_j && arr[i].id > arr[j].id) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    int N;
    cin >> N;

    Student students[100]; // Fixed array for up to 100 students

    // Input student data
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    // Sort students by total marks and id
    sortStudents(students, N);

    // Output sorted student data
    for (int i = 0; i < N; ++i) {
        cout << students[i].name << " " << students[i].cls << " "<< students[i].section << " " << students[i].id << " "<< students[i].math_marks << " " << students[i].eng_marks << endl;
    }

    return 0;
}