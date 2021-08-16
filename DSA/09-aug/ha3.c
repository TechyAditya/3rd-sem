//3. WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers.
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int LHS = 0, RHS = n - 1;
    while (LHS < RHS)
    {
        while (a[LHS] % 2 == 0 && LHS < RHS)
            LHS++;

        while (a[RHS] % 2 != 0 && LHS < RHS)
            RHS--;

        if (LHS < RHS)
        {
            swap(&a[LHS], &a[RHS]);
            LHS++;
            RHS--;
        }
    }

    printf("\nSorted array: [");
    for (int i = 0; i < n; i++)
        printf("%d, ", a[i]);

    printf("\b\b] ");
    return 0;
}