/*
4)Write a program to enter the code, name and price of items. The user must feed the quantity in which he wants a product.	
The program must calculate and display the final bill of 10 nitems.	
In the following format.	
S1.	Code	Name            Price   Quantity Total	
1.	rib001	Printercatrige 	300	    2	     600	
2	Pap45	A4 size paper	200	    0	     0	
3.	Bk2109	Computer book	350	    5	     1750	
Total = Rs.2350/-
*/
#include <iostream>
#include <iomanip>
using namespace std;

class Item
{
private:
    char code[10], name[20];
    float price, total;
    int quantity;

public:
    void input();
    void output(int sl);
};

void Item::input()
{
    cout << "Enter code: ";
    cin >> code;
    cout << "Enter name: ";
    scanf(" %[^\n]s", name); //name with space 
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    total = price * quantity;
}

void Item::output(int sl)
{
    cout << setw(8) << left << sl << setw(10) << left << code << setw(20) << left << name << setw(10) << right << price << setw(6) << right << quantity << setw(10) << right << total << endl;
}

int main()
{
    cout << "Enter number of items: ";
    int ctr;
    cin >> ctr;
    Item s[ctr];
    for (int i = 0; i < ctr; i++)
    {
        cout << "ENTRIES FOR ITEM " << i + 1 << endl;
        s[i].input();
    }

    cout << setw(8) << left << "Sl.no" << setw(10) << left << "Code" << setw(20) << left << "Name" << setw(10) << right << "Price" << setw(6) << right << "Qty" << setw(10) << right << "Total" <<endl;
    for (int i = 0; i < ctr; i++)
        s[i].output(i + 1);

    return 0;
}
