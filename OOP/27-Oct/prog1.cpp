/*
1) Implement a class String containing the following functions:
-	Overload + operator to carry out concatenation of strings.
-	Overload = operator to carry out string copy.
-	Overload == operator to carry out the comparison of strings.
-	Function to display the length of a string
*/

#include <iostream>
#include <cstring>
using namespace std;

class Str
{
public:
    char data[100];
    Str operator+(Str B)
    {
        Str T;
        int i, j;
        for (i = 0; data[i] != '\0'; i++)
            T.data[i] = data[i];
        T.data[i++] = ' ';
        for (j = 0; B.data[j] != '\0'; i++, j++)
            T.data[i] = B.data[j];
        return T;
    }
    void operator=(Str B)
    {
        strcpy(data, B.data);
    }
    int operator==(Str B)
    {
        if (strcmp(data, B.data) == 0)
            return 1;
        else
            return 0;
    }
};

int stringLength(Str A)
{
    int i;
    for (i = 0; A.data[i] != '\0'; i++)
        ;
    return i;
}

int main()
{
    Str A;
    //Operator +
    strcpy(A.data, "abcdefghij");
    Str B;
    strcpy(B.data, "0123456789");
    Str T = A + B;
    cout << T.data << endl;
    //Operator =
    Str C;
    C = B;
    cout << C.data << endl;
    //Operator ==
    switch (B == C)
    {
    case 0:
        cout << "Not same";
        break;
    case 1:
        cout << "Same";
        break;
    }
    //Length of Str
    cout << "\nLength =" << stringLength(A);
    return 0;
}
