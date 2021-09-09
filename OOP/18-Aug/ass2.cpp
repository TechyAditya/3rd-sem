//2. Modify the program 1 to store marks in 5 sub   jects. Calculate the total marks and percentage of a student and display it
#include <iostream>
using namespace std;
class Student
{
private:
    char name[20];
    int rollno;
    int marks[5], tmarks, percentage;

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
    tmarks = 0;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> marks[i];
        tmarks += marks[i];
    }
    percentage = tmarks / 5;
}

void Student::output()
{
    cout << "\nName: " << name
         << "\nRoll no: " << rollno
         << "\nTotal marks: " << tmarks
         << "\nPercentage: " << percentage << "%" << endl;
}

int main()
{
    s.input();
    s.output();
    return 0;
}
