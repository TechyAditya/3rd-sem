//1. WAP to input a sparse matrix and represent it using 3 tuple representation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];

    //input
    printf("Enter elements of sparse matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    //process
    int sparse[r * c][3]; //blank initialisation, assuming all elements are non-zero
    int ctr = -1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != 0)
            {
                ctr++;
                sparse[ctr][0] = i + 1;
                sparse[ctr][1] = j + 1;
                sparse[ctr][2] = a[i][j];
            }
            
    //output
    printf("Sparse matrix in tuple:\n");
    printf("Row\tColumn\tNumber\n");
    for (int i = 0; i < ctr; i++)
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);

    return 0;
}