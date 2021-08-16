//4. Matrix addition
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of matrix, n=");
    scanf("%d", &n);
    int arr1[n][n], arr2[n][n];
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr1[i][j]);

    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr2[i][j]);

    int sum[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            sum[i][j] = arr1[i][j] + arr2[i][j];
    
    printf("Sum of elements of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
    return 0;
}