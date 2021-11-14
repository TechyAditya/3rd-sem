#include <stdio.h>

int main()
{
    int a[3][3];
    printf("Enter the elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    int s = 0;
    printf("Elements below the minor diagonal are : \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j > 3 - 1 - i)
            {
                printf("%d\t", a[i][j]);
                s = s + a[i][j];
            }
            else  
                printf("\t");
        }
        printf("\n");
    }

    printf("The sum is %d\n", s);
    return 0;
}
