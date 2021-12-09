#include <iostream>
#include <string>
using namespace std;
int main()
{
    string st;
    st = "Hello World\nHi";
    for (int i = 0; st[i] != '\0'; i++)
        cout << st[i];
    return 0;
}