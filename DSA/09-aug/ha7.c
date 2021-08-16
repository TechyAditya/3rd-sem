//7. WAP to find out the kth smallest and kth largest element stored in a dynamic array of n integers, where k<n.
#include <stdio.h>
#include <stdlib.h>
int n;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sorted(int *arr)
{
    int min;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (*(arr + j) < *(arr + i))
                swap(arr + i, arr + j);
}

int main()
{
    printf("Enter n:");
    scanf("%d", &n);

    int *a = (int *)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    sorted(a);

    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    printf("\nkth smallest element: %d", *(a + k - 1));
    printf("\nkth largest element: %d", *(a + n - k));

    return 0;
}
