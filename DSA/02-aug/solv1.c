#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter elements of array 1: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);
    
    printf("Enter elements of array 2: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int sum[n], diff[n], product[n];
    for (int i = 0; i < n; i++)
    {
        sum[i] = arr1[i] + arr2[i];
        diff[i] = arr1[i] - arr2[i];
        product[i] = arr1[i] * arr2[i];
    }

    printf("\nSum:\t");
    for (int i = 0; i < n; i++)
        printf("%d ", sum[i]);
    
    printf("\nDiff:\t");
    for (int i = 0; i < n; i++)
        printf("%d ", diff[i]);
    
    printf("\nProduct:\t");
    for (int i = 0; i < n; i++)
        printf("%d ", product[i]);

    return 0;
}