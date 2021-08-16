//10. WAP to swap all the elements in the 1st column with all the corresponding elements in the last column, and 2nd column with the second last column and 3rd with 3rd last etc. of a 2-D dynamic array.  Display the matrix.
#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int temp;
        temp = *a;
        *a = *b;
        *b = temp;
        a += col;
        b += col;
    }
}

int main()
{
    int m, n;
    printf("Enter size of m x n array: ");
    scanf("%d %d", &m, &n);

    int *ptr = (int *)calloc(m * n, sizeof(int));

    printf("Enter elements:\n");

    for (int i = 0; i < m * n; i++)
        scanf("%d", (ptr + i));

    printf("Entered array: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", *(ptr + (i * n) + j));

        printf("\n");
    }

    for (int i = 0; i < n / 2; i++)
        swap((ptr + i), (ptr + (n - 1) - i), m, n);

    printf("New array: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", *(ptr + (i * n) + j));
        printf("\n");
    }

    return 0;
}