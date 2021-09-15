//2. Suppose a company markets both hardware and software. Create a base class Item that stores the title of the item in string and its price in float. There is another base class called Sales that holds an array of three floats so that it can record the sale in rupees of a particular item for the last three months. Two derived classes are to be written HW_item and SW_item for both items and sales. The HW_item class holds category of item and its original equipment manufacturer, whereas the SW_item glass holds the type of software item and the OS under which it works. Each class has its own get_data() and display_data() functions to input and output data respectively. Also calculate the total amount of sales for each item. Write a program to implement the above program in C++.
#include <iostream>
#include <string>

using namespace std;
class Item
{
public:
    char title[50];
    float price;
};

class Sales
{
public:
    float sale[3];
    float totalSales;
};

class HW_item : public Item, public Sales
{
public:
    char category[50], manufacturer[50];
    float totalCost;
    void getData()
    {
        cout << "Enter title: ";
        scanf(" ");
        cin.getline(title, 50);
        cout << "Enter price: ";
        cin >> price;

        totalSales = 0;
        cout << "Enter number of sales for 3 months: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> sale[i];
            totalSales += sale[i];
        }

        cout << "Enter category: ";
        scanf(" ");
        cin.getline(category, 50);
        cout << "Enter manufacturer: ";
        cin.getline(manufacturer, 50);
        totalCost = price * totalSales;
    }
    void displayData()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;

        cout << "Total number of sales: " << totalSales << endl;

        cout << "Category: " << category << endl;
        cout << "Manufacturer: " << manufacturer << endl;
        cout << "Total cost: " << totalCost << endl;
    }
};

class SW_item : public Item, public Sales
{
public:
    char softwareType[50], OS[50];
    float totalCost;
    void getData()
    {
        
        cout << "Enter title: ";
        scanf(" ");
        cin.getline(title, 50);
        cout << "Enter price: ";
        cin >> price;

        totalSales = 0;
        cout << "Enter number of sales for 3 months: ";
        for (int i = 0; i < 3; i++)
        {
            cin >> sale[i];
            totalSales += sale[i];
        }

        cout << "Enter software type: ";
        scanf(" ");
        cin.getline(softwareType, 50);
        cout << "Enter OS: ";
        cin.getline(OS, 50);
        totalCost = price * totalSales;
        cout << "Total cost: " << totalCost << endl;
    }
    void displayData()
    {
        
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;

        cout << "Total number of sales: " << totalSales << endl;

        cout << "Software type: " << softwareType << endl;
        cout << "OS: " << OS << endl;
        cout << "Total cost: " << totalCost << endl;
    }
};

int main()
{
    HW_item a;
    SW_item b;
    cout << "Enter data for hardware Item: \n";
    a.getData();

    cout << "Enter data for software Item: \n";
    b.getData();

    cout << "\nHardware Item: \n";
    a.displayData();

    cout << "\nSoftware Item: \n";
    b.displayData();

    return 0;
}
