//1. WAP to input a sparse matrix and represent it using 3 tuple representation 
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];
    printf("Enter elements of sparse matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    
    
}