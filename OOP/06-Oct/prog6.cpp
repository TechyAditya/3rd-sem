// Modify the question 3 using friend function to multiply and divide two complex number
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
    friend complex operator*(complex n1, complex n2);
    // friend complex operator -(complex n1,complex n2);
};

complex operator*(complex n1, complex n2)
{
    complex mult;
    mult.r = (n1.r * n2.r - n1.i * n2.i);
    mult.i = n1.r * n2.i + n1.i * n2.r;
    return mult;
}

int main()
{
    complex num1, num2, mult;
    num1.getdata();
    num2.getdata();
    num1.display();
    num2.display();
    mult = num1 * num2;
    cout << "Displaying multiplication" << endl;
    mult.display();
}