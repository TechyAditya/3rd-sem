//Write a C++ program to read students’ record such as name, roll, sex, height and weight from the specified file and to display in a sorted order
#include <iostream>
#include <fstream>
using namespace std;
class Students
{
public:
    string name;
    int roll;
    char sex;
    float height, weight;
    int size; //will only be stored inside 1st student
    void input()
    {
        cout << "Enter roll: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter sex (M/F): ";
        cin >> sex;
        cout << "Enter height (cm) and weight (kg): ";
        cin >> height >> weight;
    }
    void output()
    {
        cout << "\nName: " << name
             << "\nRoll: " << roll
             << "\nSex: " << ((sex == 'M' || sex == 'm') ? "Male" : "Female")
             << "\nHeight: " << height
             << "\nWeight: " << weight;
    }
    void swap(Students &obj)
    {
        Students temp;
        temp.name = name;
        temp.roll = roll;
        temp.sex = sex;
        temp.height = height;
        temp.weight = weight;

        name = obj.name;
        roll = obj.roll;
        sex = obj.sex;
        height = obj.height;
        weight = obj.weight;

        obj.name = temp.name;
        obj.roll = temp.roll;
        obj.sex = temp.sex;
        obj.height = temp.height;
        obj.weight = temp.weight;
    }
} s[100];

void sort()
{
    int n = s[0].size;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (s[i].roll > s[j].roll)
            {
                s[i].swap(s[j]);
            }
}

void view()
{
    string filename;
    cout << "Enter file name: ";
    cin >> filename;
    ifstream file(filename);
    file.read((char *)&s, sizeof(s));
    int n = s[0].size;
    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << ":";
        s[i].output();
    }
    file.close();
}

void create()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    s[0].size = n;
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ":\n";
        s[i].input();
    }

    sort();
    
    cout << "Enter filename: ";
    string filename;
    cin >> filename;
    ofstream file(filename);
    file.write((char *)&s, sizeof(s));
}

int main()
{
    cout << "\n1. Create and save Student class"
         << "\n2. Load  and display from file"
         << "\nchoice> ";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        create();
        break;
    case 2:
        view();
        break;
    
    }
    return 0;
}
