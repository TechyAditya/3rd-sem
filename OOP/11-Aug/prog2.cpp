#include <iostream>
using namespace std;
int main()
{
    char name[69];
    int roll, age;
    cout << "Enter name: ";
    cin.getline(name, 69);
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter roll: ";
    cin >> roll;

    cout << "\nName: " << name << "\nRoll: " << roll << "\nAge: " << age;
    return 0;
}