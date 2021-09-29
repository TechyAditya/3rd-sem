#include<iostream>
using namespace std;

class B;
class A
{
    int a;
    public:
    A():a(0){}
    void show(A &x, B &y);
};
class B
{
    private:
    int b=6;
    public:
    B():b(){}
    friend void A::show (A &x, B &y);
};
void A::show (A &x, B &y)
{
    x.a = a;
    cout<<"A::a= "<<x.a<<" B::b="<<y.b;
}
int main()
{
    A a;
    B b;
    a.show(a, b);
}