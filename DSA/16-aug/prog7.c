//7. Menu driven program to add and multiply 2 given polynomials
#include <stdio.h>
#include <stdlib.h>
int *sum, *product, *v1, *v2, c1, c2, bc, sc;

void init()
{
    printf("Enter number of coefficients of both polynomials: ");
    scanf("%d %d", &c1, &c2);
    v1 = (int *)malloc(c1 * sizeof(int));
    v2 = (int *)malloc(c2 * sizeof(int));
    if (c1 > c2)
    {
        bc = c1;
        sc = c2;
    }
    else
    {
        bc = c2;
        sc = c1;
    }

    sum = (int *)malloc(bc * sizeof(int)); //logic for greatest coefficient
    product = (int *)malloc((c1 + c2 - 1) * sizeof(int));
}

void addition(int *a, int *b)
{
    for (int i = 0; i < bc; i++)
    {
        if (i >= c1)
            sum[i] = a[i];
        else if (i >= c2)
            sum[i] = b[i];
        else
            sum[i] = a[i] + b[i];
    }

    for (int i = bc - 1; i >= 0; i--)
        if (sum[i] != 0)
        {
            if (i != 0)
                printf("%dx^%d + ", sum[i], i);
            else
                printf("%d\n", sum[i], i);
        }
}

void multiply(int *a, int *b)
{
    for (int i = 0; i < c1 + c2; i++)
        product[i] = 0;

    for (int i = 0; i < c1; i++)
        for (int j = 0; j < c2; j++)
            if (a[i] != 0 && b[j] != 0)
                product[i + j] += a[i] * b[j];
    for (int i = c1 + c2 - 1; i >= 0; i--)
        if (product[i] != 0)
        {
            if (i != 0)
                printf("%dx^%d + ", product[i], i);
            else
                printf("%d\n", product[i], i);
        }
}

int main()
{
    init();
    printf("Enter coefficients of polynomial 1: ");
    for (int i = 0; i < c1; i++)
        scanf("%d", &v1[i]);

    printf("Enter coefficients of polynomial 2: ");
    for (int i = 0; i < c2; i++)
        scanf("%d", &v2[i]);

    printf("Polynomial 1: ");
    for (int i = c1 - 1; i >= 0; i--)
        if (v1[i] != 0)
        {
            if (i != 0)
                printf("%dx^%d + ", v1[i], i);
            else
                printf("%d\n", v1[i], i);
        }

    printf("Polynomial 2: ");
    for (int i = c2 - 1; i >= 0; i--)
        if (v2[i] != 0)
        {
            if (i != 0)
                printf("%dx^%d + ", v2[i], i);
            else
                printf("%d\n", v2[i], i);
        }

    printf("1. Add them\n2. Multiply them\nEnter the choice: ");
    int ch = 0;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        addition(v1, v2);
        break;
    case 2:
        multiply(v1, v2);
        break;
    default:
        printf("Unknown\n");
    }
    return 0;
}
