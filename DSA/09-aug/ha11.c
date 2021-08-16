//11. WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers using a single loop.
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
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int LHS = 0, RHS = n - 1;
    while (LHS < RHS)
    {
        while (arr[LHS] % 2 == 0 && LHS < RHS)
            LHS++;

        while (arr[RHS] % 2 != 0 && LHS < RHS)
            RHS--;

        if (LHS < RHS)
        {
            swap(&arr[LHS], &arr[RHS]);
            LHS++;
            RHS--;
        }
    }

    printf("\nSorted array: [");
    for (int i = 0; i < n; i++)
        printf("%d, ", arr[i]);

    printf("\b\b] ");
    return 0;
}
