//Create a class which stores employee name, id and salary Derive two classes from ‘Employee’ class: ‘Regular’ and ‘Part-Time’. The ‘Regular’ class stores DA, HRA and basic salary. The ‘Part-Time’ class stores the number of hours and pay per hour. Calculate the salary of a regular employee and a part-time employee, using virtual function
#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
public:
    string name;
    int id;
    virtual void input() {}
    virtual int income() { return -1; }
    virtual void output(int money) {}
};

class Regular : public Employee
{
public:
    float da, hra, basic_salary;
    void input()
    {
        cout << "Enter basic salary: " << endl;
        cin >> basic_salary;
    }
    int income()
    {
        da = 0.25 * basic_salary;
        hra = 0.75 * basic_salary;
        int salary = basic_salary + da + hra;
        return salary;
    }
    void output(int money)
    {
        cout << "Name of the regular employee: " << name << endl;
        cout << "ID of the regular employee: " << id << endl;
        cout << "Basic Salary of the regular employee: " << basic_salary << endl;
        cout << "The Salary of the regular employee is: " << money << endl;
    }
};

class PartTime : public Employee
{
public:
    int hour, pph;
    void input()
    {
        cout << "Enter total work hour: ";
        cin >> hour;
        cout << "Enter pay per hour: ";
        cin >> pph;
    }
    int income()
    {
        int salary = hour * pph;
        return salary;
    }
    void output(int money)
    {
        cout << "\nName of the part-time employee: " << name;
        cout << "\nID of the part-time employee: " << id;
        cout << "\nTotal work hours of the part-time employee: " << hour;
        cout << "\nPay per hour of the part-time employee: " << pph;
        cout << "\nThe Salary of the part-time employee is: " << money;
    }
};

int main()
{
    Employee *ptr;
    Regular r;
    PartTime p;

    cout << "1. Regular employee" << endl
         << "2. Part-time employee" << endl
         << "Enter your choice: ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        ptr = &r;
        break;
    case 2:
        ptr = &p;
        break;
    default:
        cout << "Invalid choice" << endl;
        return 0;
    }

    cout << "Enter name: ";
    cin >> ptr->name;
    cout << "Enter id: ";
    cin >> ptr->id;
    ptr->input();
    ptr->output(ptr->income());

    return 0;
}
