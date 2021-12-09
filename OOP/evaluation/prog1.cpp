//Write a program to create a class player having data members as player number, name, score. Now enter details of player by overloading extraction operator (>>) and display all the details by overloading insertion operator (<<)
#include <iostream>
using namespace std;
class player
{
public:
    int no;
    char nm[50];
    int sc;
    friend ostream &operator<<(ostream &, player);
    friend istream &operator>>(istream &, player &);
};

ostream &operator<<(ostream &out, player p)
{
    out << "Player no:\t" << p.no << endl;
    out << "Name is:\t" << p.nm << endl;
    out << "Score is:\t" << p.sc << endl;
    return out;
}

istream &operator>>(istream &in, player &p)
{
    cout << "Enter Player No.: " << endl;
    in >> p.no;
    cout << "Enter name: " << endl;
    in >> p.nm;
    cout << "Enter score: " << endl;
    in >> p.sc;
    return in;
}

int main()
{
    player pla1[5];
    cout << "Enter details" << endl;
    for (int i = 0; i < 5; i++)
        cin >> pla1[i];
    cout << "Details:" << endl;
    for (int i = 0; i < 5; i++)
        cout << pla1[i];
    return 0;
}
