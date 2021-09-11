//3. Create 2d array using dynamic memory allocation and display matrix and also show sum of all the elements
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int r, c;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &r, &c);
    int **ptr = (int **)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++)
        ptr[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &ptr[i][j]);

    printf("Elements of array: \n");
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", ptr[i][j]);
            sum += ptr[i][j];
        }
        printf("\n");
    }
    printf("Sum of all the elements = %d\n", sum);
    return 0;
}