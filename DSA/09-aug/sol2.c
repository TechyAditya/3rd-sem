#include <stdio.h>
#include <stdlib.h>

int first, row, column;

int index(int i, int j)
{    return i * column + j;    }

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void asc(int *ptr)
{
    //*(ptr - 1) = -1; //non-garbage value of dead element to support recursive logic
    printf("Sorted matrix as rows ascending order:\n");
    for(int g = 0; g < row*column - 1; ++g)
        for(int h = g + 1; h < row*column; ++h)
            if(ptr[g] > ptr[h])
                swap(&ptr[g], &ptr[h]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d\t", *((ptr + (i * column) + j)));
        printf("\n");
    }
}

void desc(int *ptr)
{
    printf("Sorted matrix as columns descending order:\n");
    for(int g = 0; g < row*column - 1; ++g)
        for(int h = g + 1; h < row*column; ++h)
            if(ptr[g] < ptr[h])
                swap(&ptr[g], &ptr[h]);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d\t", *((ptr + (i * column) + j)));
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
    /*
    int *column = (int *)malloc(row * column * sizeof(int));
    column = ptr;
    *(column - row) = -1;
    printf("Sorted matrix as columns descending order:\column");
    for (int i = 0; i < row; i++)
    {
        first = *(column); //address for start of the column
        for (int j = 1; j < column; j++)
            desc((column + (j * row) + i));
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
            printf("%d\t", *((column + (i * row) + j)));
        printf("\column");
    }
*/
    return 0;
}