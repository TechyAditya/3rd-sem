/*write a program create a class student including data members name, rollno, branch, sec. 
Derive two classes midsem and endsem from student class. members of midsem and endsem class are marks 
in 3 different subject along with attendance mark in midesem. Display
the student informations with total marks and grade. initialize data members using parameterized constructor*/
#include <bits/stdc++.h>
using namespace std;
class data
{
public:
    char name[20];
    int roll;
    char branch[10];
    int sec, total = 0;
    data()
    {
        cout << "Enter the name of the student " << endl;
        cin >> name;
        cout << "Enter the roll no of the stdent " << endl;
        cin >> roll;
        cout << "Enter the branch of the student " << endl;
        cin >> branch;
        cout << "Enter the sec of the student " << endl;
        cin >> sec;
    }
};

class midsem : public data
{
public:
    int mar[3];
    midsem()
    {
        cout << "Midsem marks:\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the marks of subject " << i + 1 << ": ";
            cin >> mar[i];
            total = total + mar[i];
        }
    }
};

class endsem : public midsem
{
public:
    int endmar[3], att_mar[3];
    endsem()
    {
        cout << "End sem marks" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter the marks of subject " << i + 1 << ": ";
            cin >> endmar[i];
            cout << "Enter the attendence marks of subject " << i + 1 << ": ";
            cin >> att_mar[i];
            total = total + endmar[i] + att_mar[i];
        }
    }
    void display()
    {
        int per;
        cout << "\ninfo of the students";
        cout << "\nname of the student :" << name;
        cout << "\nroll no of the student :" << roll;
        cout << "\nsec of the student :" << sec;
        cout << "\nbrach of the student :" << branch;
        cout << "\ntotal marks of the student :" << total;
        per = (total) / 3;
        cout << "\nTotal percentage:" << per;
        if (per >= 85)
            cout << "\nGrade A+";
        else if (per >= 70)
            cout << "\nGrade A";
        else if (per >= 50)
            cout << "\nGrade B";
        else
            cout << "\nGrade C";
    }
};

int main()
{
    endsem obj;
    obj.display();
    return 0;
}
