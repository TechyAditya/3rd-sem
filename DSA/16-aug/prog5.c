//5. Matrix multiplication
#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of matrix:, n=");
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

    int product[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            product[i][j] = 0;
            int temp = 1;
            for (int k = 0; k < n; k++)
            {
                temp = arr1[i][k] * arr2[k][j];
                product[i][j] += temp;
            }
        }
    
    printf ("Product of matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", product[i][j]);
        printf("\n");
    }
    
    return 0;
}
