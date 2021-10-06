#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "This is base class\n"; //base class statement
    }
};

class derived
{
    base b; //base class object in derived class
public:
    derived()
    {
        cout << "This is derived class\n"; //derived class statement
    }
};

int main()
{
    derived d1; //after creating derived class object it will first call base class then derived class
    return 0;
}