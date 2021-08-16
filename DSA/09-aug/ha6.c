//6. WAP to sort rows of a dynamic matrix having m rows and n columns in ascending and columns in descending order.
#include <stdio.h>
#include <stdlib.h>

int row, column;

void rowswap(int *a, int pos)
{
    int temp = *a;
    *a = *(a + 1);
    *(a + 1) = temp;
    if (pos > 0 && *(a - 1) > *a)
        rowswap((a - 1), pos - 1);
}

void colswap(int *a, int pos)
{
    int temp = *a;
    *a = *(a + row);
    *(a + row) = temp;
    if (pos > 0 && *(a - row) < *a)
        colswap((a - row), pos - 1);
}

void asc(int *ptr)
{
    printf("Sorted matrix as rows ascending order:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column - 1; j++)
        {
            int pos = i * row + j;
            if (ptr[pos] > ptr[pos + 1])
                rowswap(&ptr[pos], j);
        }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d\t", *(ptr + i * column + j));
        printf("\n");
    }
}

void desc(int *ptr)
{
    printf("Sorted matrix as columns descending order:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column - 1; j++)
        {
            int pos = i + row * j;
            if (ptr[pos] < ptr[pos + row])
                colswap(&ptr[pos], j);
        }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d\t", *(ptr + i * column + j));
        printf("\n");
    }
}

int main()
{
    printf("Enter the dimensions of the matrix: ");
    scanf("%d %d", &row, &column);

    int *ptr = (int *)malloc(row * column * sizeof(int)); //2d array
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            scanf("%d", (ptr + (i * column) + j));

    printf("Entered matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d\t", *(ptr + (i * column) + j));
        printf("\n");
    }

    asc(ptr);
    desc(ptr);

    return 0;
}