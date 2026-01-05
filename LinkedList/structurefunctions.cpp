#include<iostream>

using namespace std;

struct Student{
    int id;
    string name;
    float marks;
}s;

void printStudentDetails() {
    cout << "Student ID: " << s.id << endl;
    cout << "Student Name: " << s.name << endl;
    cout << "Student Marks: " << s.marks << endl;
}

int main()
{
    cin >> s.id;
    cin >> s.name;
    cin >> s.marks;

    printStudentDetails();
}