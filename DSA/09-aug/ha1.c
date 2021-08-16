//1. Given an unsorted dynamic array arr and two numbers x and y, find the minimum distance between x and y in arr.
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

    int x, y;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);

    int index1, index2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x && a[i + 1] != x)
        {
            index1 = i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == y)
        {
            index2 = i;
            break;
        }
    }

    printf("Number of elements between x and y: %d\n", index2 - index1 + 1);
    return 0;
}