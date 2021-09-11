//4. Do q1 using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c];

    //input
    int count = 0;
    printf("Enter elements of sparse matrix:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j] != 0)
                count++;
        }

    //process
    int *sparse = (int *)calloc((count + 1) * 3, sizeof(int));
    int ctr = -1;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (a[i][j] != 0)
            {
                ctr++;
                *(sparse + (3 * ctr)) = i + 1;
                *(sparse + (3 * ctr) + 1) = j + 1;
                *(sparse + (3 * ctr) + 2) = a[i][j];
            }

    //output
    printf("Sparse matrix in tuple using DMA:\n");
    printf("Row\tColumn\tNumber\n");
    for (int i = 0; i < ctr + 1; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", *(sparse + (i * 3) + j));
        printf("\n");
    }
    return 0;
}