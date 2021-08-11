#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float area, s, a, b, c, sum;
    cout << "Enter sides of triangle: ";
    cin >> a >> b >> c;
    s = (a + b + c) / 2;
    sum = s * (s - a) * (s - b) * (s - c);
    area = sqrt(sum);
    cout << "Area = " << area << endl;
    return 0;
}
