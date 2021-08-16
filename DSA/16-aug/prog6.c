/*
6. Menu driven program ->
 a. Display the lower triangle of a Matrix 
 b. Display the upper triangle of a Matrix
 c. Transpose of matrix
 */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter matrix: \n");
    for (int i = 0 ; i < n ; i++) 
        for (int j = 0 ; j < n ; j++)
            scanf("%d", &matrix[i][j]);

    //lower triangle
    printf("Lower triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j < i)
                printf("%d\t", matrix[i][j]);

        printf("\n");
    }

    //upper triangle
    printf("Upper triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i >= j)
                printf("\t");
            else printf("%d\t", matrix[i][j]);

        printf("\n");
    }
    return 0;
}