/*
Create a 'DISTANCE' class with the following members:
Data Members
b) feet and inches Member Functions
d) To input distance through constructor
e) To output distance
f) To add two distance objects
Write a main function to create objects of DISTANCE class. 
Input two distances (one through implicit call and other explicit call and output the sum)
*/
#include <iostream>
using namespace std;

class DISTANCE
{
private:
    float ft, in; //b) feet and inches Member Functions
public:
    void getData() //d) To input distance through constructor
    {
        cout << "Feet: ";
        cin >> ft;
        cout << "Inch: ";
        cin >> in;
    }
    void showData() //e) To output distance
    {
        cout << ft << " ft " << in << " in" << endl;
    }
    void sum(DISTANCE a, DISTANCE b)
    {
        ft = a.ft + b.ft;
        in = a.in + b.in;
        ft += (in / 12);
        in = (in % 12);
    }
};