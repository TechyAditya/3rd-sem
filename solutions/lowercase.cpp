#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ifstream in("input.txt");
    ofstream low("lower.txt");
    ofstream up("upper.txt");

    string str;
    char lower[1000], upper[1000]; 

    int i, j = 0;

    while (in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
        for (i = 0; str[i] != '\0'; i++, j++)
        {
            lower[j] = str[i];
            upper[j] = str[i];
            if (str[i] >= 'A' && str[i] <= 'Z')
                lower[j] = str[i] + 32;
        }
        lower[j++] = '\n';
    }
    lower[j++] = '\0';

    for (i = 0; i < j; i++)
    {
        upper[i] = lower[i];
        if (lower[i] >= 'a' && lower[i] <= 'z')
            upper[i] = lower[i] - 32;
    }
    upper[i++] = '\0';

    cout << "Upper case string: \n"
         << upper << endl
         << "Lower case string: \n"
         << lower << endl;

    for (i = 0; i < j; i++)
    {
        low << lower[i]; 
        up << upper[i];
    }

    return 0;
}
