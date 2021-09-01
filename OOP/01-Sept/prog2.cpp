//Create a class which stores a sting and its length as data members. Include all the constructors. Include a member function to join two strings and display the concatenated string.
#include <iostream>
#include <cstring>
using namespace std;
class String
{
private:
    char s[100];
    int l;

public:
    String()
    {
        strcpy(s, "Hello");
        l = 6;
    }
    String(char in[100], int ln)
    {
        strcpy(s, in);
        l = ln;
    }
    void printData()
    {
        cout << s << endl;
    }

    void concatenate(String, String);
};

void String::concatenate(String ob1, String ob2)
{
    l = ob1.l + ob2.l;
    for (int i = 0; i < ob1.l; i++)
        s[i] = ob1.s[i];
    s[ob1.l - 1] = ' ';
    for (int i = 0; i < ob2.l; i++)
        s[ob1.l + i] = ob2.s[i];
}

int main()
{
    String a, b("world", 6);
    String c;
    c.concatenate(a, b);
    c.printData();
}