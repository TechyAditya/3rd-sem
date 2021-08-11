#include <iostream>
using namespace std;
int main()
{
    int cgpa;
    cout << "Enter cgpa: ";
    cin >> cgpa;
    switch (cgpa)
    {
    case 10:
        cout << "O Grade";
        break;
    case 9:
        cout << "E Grade";
        break;
    case 8:
        cout << "A Grade";
        break;
    case 7:
        cout << "B Grade";
        break;
    case 6:
        cout << "C Grade";
        break;
    case 5:
        cout << "D Grade";
        break;
    case 4:
    case 3: 
    case 2:
    case 1:
        cout << "F Grade";
    break;
    default:
        cout << "Invalid cgpa";
    }

    return 0;
}