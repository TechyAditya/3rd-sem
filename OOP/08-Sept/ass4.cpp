//4. (Multipath Inheritance) Design a base class called Student with two fields:- (i) Name (ii) roll number. Derive two classes called Sports and Exam from the Student base class. Class Sports has a field called s_grade and class Exam has a field called e_grade which are integer fields. Derive a class called Results which inherit from Sports and Exam. This class has a character array or string field to represent the final result. Also it has a member function called display which can be used to display the final result. Illustrate the usage of these classes in main.

#include <iostream>
using namespace std;

class Student
{
public:
    char name[100];
    int roll;
};

class Sports
{
public:
    int s_grade;
};

class Exam : public Student
{
public:
    int e_grade;
};

class Results : public Sports, public Exam
{
public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Sports grade: " << s_grade << endl;
        cout << "Exam grade: " << e_grade << endl;
    }
};

int main()
{
    Results A;

    cout << "Enter name: ";
    cin.getline(A.name, 100);
    cout << "Enter roll no: ";
    cin >> A.roll;
    cout << "Enter Sports Grade: ";
    cin >> A.s_grade;
    cout << "Enter Exam Grade: ";
    cin >> A.e_grade;

    A.display();

    return 0;
}