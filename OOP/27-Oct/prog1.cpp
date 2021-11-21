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
        T.data[i] = '\0';
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
    Str A, B, C;
    cout << "Enter data for String 1: ";
    cin.getline(A.data, 40);
    cout << "Enter data for String 2: ";
    cin.getline(B.data, 40);
    cout << "MENU\n"
         << "1. Concatenate\n"
         << "2. Copy\n"
         << "3. Check for matches\n"
         << "Enter your choice: ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        C = A + B;
        cout << "A + B = " << C.data << endl;
        return 0;
    case 2:
        cout << "Enter string number to copy(1/2): ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            C = A;
            cout << "C = " << C.data << endl;
            break;
        case 2:
            C = B;
            cout << "C = " << C.data << endl;
            break;
        default:
            cout << "Invalid input.";
        }
        return 0;
    case 3:
        if (A == B)
            cout << "Both are same";
        else
            cout << "Both are different";
        return 0;
    default:
        cout << "Invalid input.";
        return -1;
    }
}
