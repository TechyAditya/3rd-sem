#include <iostream>
using namespace std;

struct Size
{
    int feet;
    int inch;
};

Size in(Size x)
{
    cout << "Feet: ";
    cin >> x.feet;
    cout << "Inch: ";
    cin >> x.inch;
    return x;
}

Size calc(Size a, Size b)
{
    int tin1, tin2, total;
    //cout << a.feet << '   ' << a.inch;
    tin1 = (a.feet * 12) + a.inch;
    //cout << tin1 << endl;
    tin2 = (b.feet * 12) + b.inch;
    total = tin1 + tin2;
    //cout << total << endl;
    Size t;
    t.feet = total / 12;
    t.inch = total % 12;
    return t;
}

void out(Size x)
{
    cout << x.feet << " ft " << x.inch << " in\n";
}

int main()
{
    Size a, b, sum;
    cout << "Element 1:\n";
    a = in(a);
    cout << "Element 2:\n";
    b = in(b);

    sum = calc(a, b);
    out(sum);
    return 0;
}