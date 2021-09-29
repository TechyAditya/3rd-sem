#include <iostream>
using namespace std;
class T
{
    int p = 0;

public:
    T();
    T(int i) { cout << "i= " << p; }
    ~T();
};
T::T()
{
    cout << "Constructor executed " << endl;
}
T::~T()
{
    cout << "Destructor executed " << endl;
}
int main()
{
    delete new T();
    new T(5);
    return 0;
}