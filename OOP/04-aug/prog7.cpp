#include <iostream>
#include <string>
using namespace std;

struct Student 
{
    int roll;
    string name;
    char gender;
    int marks[5];
};

Student input(Student x)
{
    cout << "Enter roll: ";
    cin >> x.roll;
    cout << "Enter name: ";
    //getline(cin, x.name);
    cin >> x.name;
    cout << "Enter gender: ";
    
    cin >> x.gender;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
        cin >> x.marks[i];
    
    return x;
}

int average(Student x)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum += x.marks[i];
    
    return sum / 5;
}

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent "<< i + 1 << endl;
        s[i] = input(s[i]);
    }

    cout << "\nFailed students:\n";
    for (int i = 0; i < n; i++)
    {
        if (average(s[i]) < 40)
            cout << s[i].name << endl;
    }

    return 0;
}
