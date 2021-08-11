#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter size of array 1: ");
    scanf("%d", &m);
    printf("Enter size of array 2: ");
    scanf("%d", &n);

    int arr1[m], arr2[m + n];
    printf("Enter elements of array 1: ");
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);
    printf("Enter elements of array 2: ");
    for (int i = m; i < m + n; i++)
        scanf("%d", &arr2[i]);

    for (int i = 0; i < m; i++)
        arr2[i] = arr1[i];

    printf("Combined array: ");
    for (int i = 0; i < m + n; i++)
        printf("%d ", arr2[i]);

    return 0; 
}