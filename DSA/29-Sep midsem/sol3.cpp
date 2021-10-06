#include <iostream>
using namespace std;
class ABCD
{
    int a;
public:
    ABCD(int x) 
    { 
        a = x; 
    }
    void fun(ABCD &ob)
    {
        ob.a = a + 10;
    }
    void display()
    {
        cout << a;
    }
};
int main()
{
    АВСD р1(3);
    ABCD р2(5);
    p1.fun(p2);
    p1.display();
    return 0;
}
