#include <iostream>
using namespace std;
class Student
{
    int marks[5];
    char name[40];
    float percentage;

public:
    void input()
    {
        cout << "Enter name: ";
        cin.getline(name, 40);
        cout << "Enter marks of 5 subjects: ";
        ;
        for (int i = 0; i < 5; i++)
            cin >> marks[i];
    }
    void calc()
    {
        percentage = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << endl;
    }
};
int main()
{
    Student st;
    st.input();
    st.calc();
    return 0;
}
