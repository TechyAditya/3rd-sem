#include <iostream>
using namespace std;

class Time
{
    int hour, min, sec;

public:
    Time operator+(const Time &y)
    {
        Time obj;
        int temp;
        obj.sec = sec + y.sec;
        temp = obj.sec / 60;
        obj.sec = obj.sec % 60;
        obj.min = min + y.min + temp;
        temp = obj.min / 60;
        obj.min = obj.min % 60;
        obj.hour = hour + y.hour + temp;
        return obj;
    }
    /*
    void add(Time x, Time y)
    {
        int temp;
        sec = x.sec + y.sec;
        temp = sec / 60;
        sec = sec % 60;
        min = x.min + y.min + temp;
        temp = min / 60;
        min = min % 60;
        hour = x.hour + y.hour + temp;
    }
    */
    void input()
    {
        cout << "Hr: ";
        cin >> hour;
        cout << "Min: ";
        cin >> min;
        cout << "Sec: ";
        cin >> sec;
    }
    void output()
    {
        cout << hour << ":" << min << ":" << sec << endl;
    }
};

int main()
{
    Time a, b, c;
    cout << "Enter time 1: \n";
    a.input();
    cout << "Enter time 2: \n";
    b.input();
    c = a + b;
    cout << "Sum: ";
    c.output();
    return 0;
}