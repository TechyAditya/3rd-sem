/*Create a class that stores account number, customer name and balance. Derive two classes from the ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores minimum balance. The ‘Current’ class stores the overdue amount. Include member functions in the appropriate class for
-deposit money
-withdraw [For saving account minimum balance should be checked.] [For current account overdue amounts should be calculated.]
-display balance
Display data from each class using a virtual function.
*/
#include <iostream>
#include <string>
using namespace std;

class Account
{
public:
    int account_number, balance;
    string name, error[2];
    virtual void deposit(int money) = 0;
    virtual void withdraw(int money) = 0;
    void display()
    {
        cout << "\nAccount number: " << account_number
             << "\nAccount holder name: " << name
             << "\nBalance: " << balance << endl;
    }
};

class Savings : public Account
{
public:
    int min_balance;
    Savings()
    {
        error[1] = "Sorry, you cannot withdraw because your account balance is too low. ";
        error[0] = "Sorry, not enough balance on your account. ";
    }
    void deposit(int money)
    {
        balance += money;
    }
    void withdraw(int money)
    {
        if (min_balance > balance)
            cout << error[1] << endl;
        else if (money > balance)
            cout << error[0] << endl;
        else
        {
            balance -= money;
            cout << "TRANSACTION SUCCESSFUL\n\n";
        }
    }
};

class Current : public Account
{
public:
    int max_limit;
    Current()
    {
        error[1] = "Sorry, you cannot withdraw because you have over-used your bank account. Clear your debts before using. ";
        error[0] = "Sorry, requested amount exceeds your credit limit, try contacting our bank with income proofs to increase your credit limit. ";
    }
    void deposit(int money)
    {
        balance -= money; 
        //if balance goes negative, that's a good thing for user.
    }
    void withdraw(int money)
    {
        if (max_limit < balance)
            cout << error[1] << endl;
        else if (money > max_limit * 1.2 - balance) 
            cout << error[0] << endl;
        //Most bank companies allow withdrawal of some % of amount, let's assume it's 20%.
        else
        {
            balance += money;
            cout << "TRANSACTION SUCCESSFUL\n\n";
        }
    }
};

int main()
{
    Account *ptr;
    Savings s;
    Current c;

    cout << "Enter type of account: "
         << "\n1. Current"
         << "\n2. Savings"
         << "\nchoice> ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        ptr = &c;
        cout << "Enter maximum limit:";
        cin >> c.max_limit;
        break;
    case 2:
        ptr = &s;
        cout << "Enter minimum balance: ";
        cin >> s.min_balance;
        break;
    default:
        cout << "Invalid choice";
        return 0;
    }

    cout << "Enter account number: ";
    cin >> ptr->account_number;
    cout << "Enter account holder name: ";
    cin >> ptr->name;
    cout << "Enter initial balance: ";
    cin >> ptr->balance;

    int temp;
    while (1)
    {
        cout << "\nATM MACHINE"
             << "\n1. Deposit"
             << "\n2. Withdraw"
             << "\n3. Check Profile"
             << "\n4. Logout"
             << "\n"
             << ptr->name << "@aditya_bank> ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> temp;
            ptr->deposit(temp);
            cout << "TRANSACTION SUCCESSFUL\n\n";
            break;
        case 2:
            cout << "Enter amount to be withdrawn: ";
            cin >> temp;
            ptr->withdraw(temp);
            break;
        case 3:
            ptr->display();
            break;
        case 4:
            return 0;
        default:
            cout << "Unknown choice\n";
            break;
        }
    }
}
