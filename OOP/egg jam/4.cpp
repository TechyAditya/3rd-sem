#include <iostream>
using namespace std;
class B
{
public:
    char c = 't';
    virtual void show() = 0;
};
class D : public B
{
public:
    void show(int x)
    {
        cout << "x = " << x << endl;
    }
    void show()
    {
        cout << "c = " << c << endl;
    }
};
int main()
{
    B *q;
    D *p;
    int x = sizeof(q->c);
    p->D::show();
    p->D::show(x);
    p->D::show(-5);
    return 0;
}