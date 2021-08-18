/*
6. Menu driven program ->
 a. Display the lower triangle of a Matrix 
 b. Display the upper triangle of a Matrix
 c. Transpose of matrix
*/
#include <stdio.h>
#include <stdlib.h>
int *matrix, n;
void lower()
{
    //lower triangle
    printf("Lower triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j < i)
                printf("%d\t", *(matrix + i * n + j));

        printf("\n");
    }
}

void upper()
{
    //upper triangle
    printf("Upper triangle:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i >= j)
                printf("\t");
            else
                printf("%d\t", *(matrix + i * n + j));

        printf("\n");
    }
}

void transpose()
{
    printf("Transpose of matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", *(matrix + i + j * n)); //flipping sides
        printf("\n");
    }
}

int main()
{
    printf("Enter n:");
    scanf("%d", &n);

    matrix = (int *)malloc(n * n * sizeof(int));
    printf("Enter matrix: \n");
    for (int i = 0; i < n * n; i++)
        scanf("%d", matrix + i);

    int ch;
    printf("Enter choice:\n1. Upper triangle\n2. Lower triangle\n3. Transpose\n>>>>");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        upper();
        break;
    case 2:
        lower();
        break;
    case 3:
        transpose();
        break;
    default:
        printf("Invalid choice");
    }
return 0;
}