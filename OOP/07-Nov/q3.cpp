//3. Write a program to declare a function show() in base and derived class. Display message through the function to know name of class whose member function is executed. Use late binding concept using virtual keyword.
#include <iostream>
using namespace std;
class base
{
public:
    virtual void show()
    {
        cout << "base class member function executed" << endl;
    }
};
class derived : public base
{
public:
    void show()
    {
        cout << "derived class member function executed" << endl;
    }
};
int main()
{
    base b, *p;
    derived d;
    p = &b;
    p->show(); // Early Binding
    /*
    *** Condition: When base class member function " show() " is not made virtual
    -------------------------------------------------------------------------------
    Here Early Binding Occurs, i.e during compile time only the compiler knows which function 
    to execute since it identifies the type of pointer, which is of type base class. 
    Hence it executes the show function of base class
    */

    p = &d;
    p->show(); // Late Binding
    /*
    *** Condition: Now base class member function " show() " is made virtual 
    -------------------------------------------------------------------------------
    Here late binding occurs since base class member function " show() " is virtual.
    The pointer 'p' of type 'base' stores the address of object 'd' of 'derived' class 
    during run time, since memory is allocated during runtime. Hence here late binding occurs
    */
    return 0;
}
