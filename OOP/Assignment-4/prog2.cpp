//Write a program for reading data simultaneously from two files and display the contents.
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream file1, file2;
    string filename1, filename2;
    cout << "Enter filename 1: ";
    cin >> filename1;
    cout << "Enter filename 2: ";
    cin >> filename2;
    string st;
    file1.open(filename1);
    while (file1.eof() == 0)
    {
        getline(file1, st);
        cout << st << endl;
    }
    file2.open(filename2);
    while (file2.eof() == 0)
    {
        getline(file2, st);
        cout << st << endl;
    }
    return 0;
}
