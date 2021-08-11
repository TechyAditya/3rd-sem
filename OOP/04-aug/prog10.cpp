#include <iostream>
using namespace std;
struct Employee
{
    char name[20];
    char gender;
    char designation[20];
    char department[20];
    float basic_pay;
    float gross_pay, HR, DA;
};

void in(Employee *x)
{
    cout << "Enter name: ";
    cin >> x->name;
    cout << "Enter Gender: ";
    cin >> x->gender;
    cout << "Enter designation: ";
    cin >> x->designation;
    cout << "Enter department: ";
    cin >> x->department;
    cout << "Enter basic_pay: ";
    cin >> x->basic_pay;
}

void calc(Employee *x)
{
    x->HR = 0.25 * x->basic_pay;
    x->DA = 0.75 * x->basic_pay;
    x->gross_pay = x->basic_pay + x->HR + x->DA;
}

void out(Employee *x)
{
    cout << "Name: " << x->name << endl;
    cout << "Gender: " << x->gender << endl;
    cout << "Designation: " << x->designation << endl;
    cout << "Department: " << x->department << endl;
    cout << "Basic Pay: " << x->basic_pay << endl;
    cout << "Gross Pay: " << x->gross_pay << endl;
}

int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;

    Employee *ptr;
    ptr = (Employee *)malloc(n * sizeof(Employee));

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for employee " << i + 1 << endl;
        in(ptr + i);
        calc(ptr + i);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Employee " << i + 1 << endl;
        out(ptr + i);
    }

    return 0;
}