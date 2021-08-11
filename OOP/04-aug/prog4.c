#include <stdio.h>
void cyclicSwap(int *x, int *y, int *z)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = *z;
    *z = temp;
}

int main()
{
    int a, b, c;

    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    cyclicSwap(&a, &b, &c);

    printf("Value after swapping:\n");
    printf("a = %d \tb = %d \tc = %d", a, b, c);

    return 0;
}
