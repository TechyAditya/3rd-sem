#include <stdio.h>
int main()
{
    int i, j, k;
    k = 9;
    for (i = 1; i <= 7; i += 2)
    {
        j = i;
        while (j != 0)
        {
            printf("*");
            j--;
        }
        j = k;
        if (j > -1)
            while (j != 0)
            {
                printf(" ");
                j--;
            }
        else
            while (j != 0)
            {
                printf("\b");
                j++;
            }
        k = k - 4; 
        j = i;
        while (j != 0)
        {
            printf("*");
            j--;
        }
        printf("\n");
    }
    return 0;
}
