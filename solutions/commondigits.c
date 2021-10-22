#include <stdio.h>
int main()
{
    int a, b, ctr;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    while (a != 0 || b != 0)
    {
        if (a % 10 == b % 10)
            ctr++;
        a = a / 10;
        b = b / 10;
    }
    printf("%d common digits", ctr);
    return 0;
}
