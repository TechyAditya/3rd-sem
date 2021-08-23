// Represent a sparse matrix in 3 tuple form

#include <stdio.h>
int main()
{
    // int arr[4][5] = {{0, 0, 3, 0, 4}, {0, 0, 5, 7, 0}, {0, 0, 0, 0, 0}, {0, 2, 6, 0, 0}};
    // 0 0 3 0 4 0 0 5 7 0 0 0 0 0 0 0 2 6 0 0

    int m, n;
    printf("Enter size of the sparse matrix -\n");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    printf("Enter elements- \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i][j] != 0)
                count++;
        }
    }

    printf("1. Row Representation\n2. Column Representation\n");
    int a;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    {
        int sparse[count + 1][3];
        sparse[0][0] = 4;
        sparse[0][1] = 5;
        sparse[0][2] = count;

        int k = 1;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (arr[i][j] != 0)
                {
                    sparse[k][0] = i;
                    sparse[k][1] = j;
                    sparse[k][2] = arr[i][j];
                    k++;
                }
            }
        }

        for (int i = 0; i < count + 1; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf(" %d ", sparse[i][j]);
            }
            printf("\n");
        }
        return 0;
    }

    case 2:
    {
        int sparse[3][count + 1];
        sparse[0][0] = 4;
        sparse[1][0] = 5;
        sparse[2][0] = count;

        int k = 1;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (arr[i][j] != 0)
                {
                    sparse[0][k] = i;
                    sparse[1][k] = j;
                    sparse[2][k] = arr[i][j];
                    k++;
                }
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < count + 1; j++)
            {
                printf(" %d ", sparse[i][j]);
            }
            printf("\n");
        }
        return 0;
    }
    }
    return 0;
}