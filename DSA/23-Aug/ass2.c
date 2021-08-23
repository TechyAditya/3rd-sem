#include <stdio.h>
struct Size
{
    int feet;
    int inch;
};

Size in(Size x)
{
    printf("Feet:  ");
    scanf("%d", &x.feet);
    printf("Inch: ");
    scanf("%d", &x.inch);
    return x;
}

Size calc(Size a, Size b)
{
    int tin1, tin2, total;
    tin1 = (a.feet * 12) + a.inch;
    tin2 = (b.feet * 12) + b.inch;
    total = tin1 + tin2;
    Size t;
    t.feet = total / 12;
    t.inch = total % 12;
    return t;
}

void out(Size x)
{
    printf("%d ft %d in\n", x.feet, x.inch);
}

int main()
{
    Size a, b, sum;
    printf("Enter values for element 1:\n");
    a = in(a);
    printf("Enter values for element 2:\n");
    b = in(b);

    sum = calc(a, b);
    out(sum);
    return 0;
}