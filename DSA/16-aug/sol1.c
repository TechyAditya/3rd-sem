#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter number of terms of polynomial 1\n");
    scanf("%d", &m);
    printf("Enter number of terms of polynomial 2\n");
    scanf("%d", &n);
    int p1[m], p2[n], sum[m + n], product[m + n];
    printf("Enter coefficients of polynomial 1- \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &p1[i]);
    }
    printf("Enter coefficients of polynomial 2- \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p2[i]);
    }
    printf(" 1. Add polynomials\n 2. Multiply polynomials\n");
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    {
        for (i = 0; i < m + n; i++)
        {
            sum[i] = 0;
        }
        for (i = 0; i < m; i++)
        {
            sum[i] += p1[i] + p2[i];
        }
        for (i = m + n - 1; i >= 0; i--)
        {
            if (sum[i] != 0)
            {
                if (i != 0)
                {
                    printf("%dx^%d + ", sum[i], i);
                }
                else
                {
                    printf("%dx^%d\n", sum[i], i);
                }
            }
        }
        printf("0");
        return 0;
    }
    case 2:
    {
        for (i = 0; i < m + n; i++)
        {
            product[i] = 0;
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (p1[i] != 0 && p2[j] != 0)
                    product[i + j] += p1[i] * p2[j];
            }
        }
        for (i = m + n - 1; i >= 0; i--)
        {
            if (product[i] != 0)
            {
                if (i != 0)
                {
                    printf("%dx^%d + ", product[i], i);
                }
                else
                {
                    printf("%dx^%d\n", product[i], i);
                }
            }
        }
        printf("0");
        return 0;
    }
    default:
        printf("Enter 1 or 2");
    }
    return 0;
}