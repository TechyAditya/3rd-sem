//Create a class called 'TIME' that has three integer data members for hours, minutes and seconds, a constructor to initialize the object to some constant value, member function to add two TIME objects, member function to display time in HH:MM:SS format. Write a main function to create two TIME objects, add them and display the result in HH:MM:SS format.
#include <iostream>
using namespace std;
class TIME
{
    int h, m, s;

public:
    TIME()
    {
        h = 0, m = 0, s = 0;
    }
    void addTime(TIME a, TIME b)
    {
        s = a.s + b.s;
        m = a.m + b.m + s / 60;
        s = s % 60;
        h = a.h + b.h + m / 60;
        m = m % 60;
    }
    void input(int x)
    {
        cout << "Enter time " << x << " in hh mm ss: ";
        cin >> h >> m >> s;
    }
    void output()
    {
        cout << "Sum of time is: " << h << ":" << m << ":" << s;
    }
};

int main()
{
    TIME a, b;
    a.input(1);
    b.input(2);
    TIME c;
    c.addTime(a, b);
    c.output();
    return 0;
}