// Write a program create a class complex add and subtract two complex
// number using operator overloading concept.
#include <iostream>
using namespace std;
class complex
{
    int r, i;

public:
    void getdata()
    {
        cout << "Enter a complex number (a + bi): " << endl;
        cin >> r >> i;
    }
    void display()
    {
        cout << "The complex number is: " << endl;
        cout << r << " + " << i << "i" << endl;
    }
    friend complex operator+(complex n1, complex n2);
    friend complex operator-(complex n1, complex n2);
};

complex operator+(complex n1, complex n2)
{
    complex sum;
    sum.r = n1.r + n2.r;
    sum.i = n1.i + n2.i;
    return sum;
}

complex operator-(complex n1, complex n2)
{
    complex sub;
    sub.r = n1.r - n2.r;
    sub.i = n1.i - n2.i;
    return sub;
}

int main()
{
    complex num1, num2, sum, sub;
    num1.getdata();
    num2.getdata();
    num1.display();
    num2.display();
    sum = num1 + num2;
    sub = num1 - num2;
    cout << "Displaying sum" << endl;
    sum.display();
    cout << "Displaying difference" << endl;
    sub.display();
}