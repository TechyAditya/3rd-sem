//1. Create a class which stores name, roll number and total marks for a student. Input the data for a student and display it.
#include <iostream>
using namespace std;
class Student
{
private:
    char name[20];
    int rollno;
    int marks;

public:
    void input();
    void output();
} s;

void Student::input()
{
    cout << "Enter name: ";
    gets(name);
    cout << "Enter rollno: ";
    cin >> rollno;
    cout << "Enter total marks: ";
    cin >> marks;
}

void Student::output()
{
    cout << "\nName: " << name
         << "\nRoll no: " << rollno
         << "\nTotal marks: " << marks << endl;
}

int main()
{
    s.input();
    s.output();
    return 0;
}
