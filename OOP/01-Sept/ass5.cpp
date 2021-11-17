//Write a program using copy constructor to copy data of an object to another object
#include <iostream>
class Data
{
public:
    int x;
    Data()
    {
        x = 100;
    }
    Data(Data &a)
    {
        x = a.x;
    }
};
int main()
{
    Data a;
    Data b(a);
    std::cout << b.x;
    return 0;
}
