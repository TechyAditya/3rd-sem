//Write a function of O(n) order for removing all the odd numbers from the array.
#include <stdio.h>
void odd_remove(int A[], int n)
{
    int i, k = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] % 2 == 0)
        {
            A[k] = A[i];
            k++;
        }
    }
    for (i = 0; i < k; i++)
        printf("%d ", A[i]);
}
int main()
{
    int n;
    printf("Enter n:");
        scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Original Aray: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\nFinal Aray: ");
    odd_remove(a, n);
    return 0;
}
