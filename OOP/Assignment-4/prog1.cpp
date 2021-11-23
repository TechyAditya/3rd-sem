//Two files named ‘Source1’ and ‘Source2’ contains sorted list of integers . Write a program that reads the contents of both the files and stores the merged list in sorted form in a new file named ‘Target’
#include <iostream>
#include <fstream>
using namespace std;
class obj
{
public:
    int arr[100], n;
};
obj s1, s2, t;

void sortobj()
{
    //combining the arrays
    for (int i = 0; i < s1.n; i++)
        t.arr[i] = s1.arr[i];
    for (int i = s1.n; i < s1.n + s2.n; i++)
        t.arr[i] = s2.arr[i - s1.n];
    t.n = s1.n + s2.n;
    //linear sort
    for (int i = 1; i < t.n; i++)
    {
        int key = t.arr[i];
        int j = i - 1;
        while (j >= 0 && t.arr[j] < key)
        {
            t.arr[j + 1] = t.arr[j];
            j = j - 1;
        }
        t.arr[j + 1] = key;
    }
}

void combsort() //combine and sort
{
    string source1, source2, output;
    cout << "Enter filename for Source 1: ";
    cin >> source1;
    cout << "Enter filename for Source 2: ";
    cin >> source2;
    cout << "Enter filename for Output: ";
    cin >> output;
    ifstream src1(source1);
    ifstream src2(source2);
    src1.read((char *)&s1, sizeof(s1));
    src2.read((char *)&s2, sizeof(s2));
    sortobj();
    ofstream target(output);
    target.write((char *)&t, sizeof(t));
}

void create() //writing
{
    cout << "Enter max elements: ";
    cin >> t.n;
    cout << "Enter elements: ";
    for (int i = 0; i < t.n; i++)
        cin >> t.arr[i];
    string name;
    cout << "Enter filename: ";
    cin >> name;
    ofstream ob1(name);
    ob1.write((char *)&s1, sizeof(s1));
}

void view()
{
    cout << "Enter filename: ";
    string name;
    cin >> name;
    ifstream src(name);
    src.read((char *)&t, sizeof(t));
    for (int i = 0; i < t.n; i++)
        cout << t.arr[i] << " ";
}
int main()
{
    cout << "MENU"
         << "\n1. Create files"
         << "\n2. Merge 2 files"
         << "\n3. View files"
         << "\n4. Exit"
         << "\nFileHandling>";
    int ch;
    cin >> ch;
    switch (ch)
    {
    case 1:
        create();
        break;
    case 2:
        combsort();
        break;
    case 3:
        view();
        break;
    }
    return 0;
}
