//WAP to input a sparse matrix and represent it using 3 tuple
//representation by both row major order and column major order

#include <stdio.h>

void row_order()
{
    int i, j, k, r, c;
    printf("Enter rows(r),column(c): ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];
    printf("Enter matrix elements: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int size = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; i < c; j++)
        {
            if (matrix[i][j] != 0)
            {
                size++;
            }
        }
    }

    int row = size + 1, column = 3;
    k = 1;
    int sparse_matrix[row][column];
    sparse_matrix[0][0] = r;
    sparse_matrix[0][1] = c;
    sparse_matrix[0][2] = size;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse_matrix[k][0] = i;
                sparse_matrix[k][1] = j;
                sparse_matrix[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("Matrix Array:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", sparse_matrix[i][j]);
        }
        printf("\n");
    }
}

void column_order()
{
    int i, j, k, r, c;
    printf("Enter rows(r),column(c): ");
    scanf("%d%d", &r, &c);

    int matrix[r][c];
    printf("Enter matrix elements: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Array:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    int size = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; i < c; j++)
        {

            if (matrix[i][j] != 0)
            {
                size++;
            }
        }
    }

    int row = 3, column = size + 1;
    k = 1;
    int sparse_matrix[row][column];
    sparse_matrix[0][0] = r;
    sparse_matrix[1][0] = c;
    sparse_matrix[2][0] = size;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            if (matrix[i][j] != 0)
            {
                sparse_matrix[0][k] = i;
                sparse_matrix[1][k] = j;
                sparse_matrix[2][k] = matrix[i][j];
                k++;
            }
        }
    }

    printf("Matrix Array:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", sparse_matrix[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    row_order();
    column_order();
}