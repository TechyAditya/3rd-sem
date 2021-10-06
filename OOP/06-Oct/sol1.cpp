#include <iostream>
using namespace std;
int const size = 50;
class ballot
{
    int candidate;
    int vote[size];
    int ballt[3];
    static int spballot;

public:
    void getdisplay(void);
    ballot()
    {
        getdisplay();
    };
    ~ballot(){

    };
};
int ballot ::spballot;
void ballot ::getdisplay(void)
{
    cout << "\n Enter how many candidates you want to make:";
    cin >> candidate;
    static int a, b, c, d, e;
    a = 0;
    a = b = c = d = e;
    cout << "Enter any digit between 1 to 3:" << endl;
    cout << "1= Narendra Modi (BJP)" << endl
         << "2= Sonia Gandhi (Congress)" << endl
         << "3= Arvind Kejriwal (AAP)";
    for (int i = 0; i < candidate; i++)
    {
        cin >> vote[i];
        switch (vote[i])
        {
        case 1:
            ballt[a];
            a++;
            break;
        case 2:
            ballt[b];
            a++;
            break;
        case 3:
            ballt[c];
            a++;
            break;
        default:
            ++spballot;
        }
    }
};
int choice()
{
    do
    {
        cout << "\n Choices Available \n";
        cout << "\n 1.)Scored by Ballot A \n";
        cout << "\n 2.)Scored by Ballot B \n";
        cout << "\n 3.)Scored by Ballot C \n";
        cout << "\n 4.)Spoilt Ballot \n";
        cout << "\n 5.)Exit \n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Scored by Ballot A is" << a;
            break;
        case 2:
            cout << "Scored by Ballot B is" << b;
            break;
        case 3:
            cout << "\n Scored by Ballot C is \n"
                 << c;
            break;
        case 4:
            cout << "\n Spoilt Ballots were " << spballot;
            break;
        case 5:
            return 0;;
        }
    } while (1);
}

int main()
{
    ballot o1;
}