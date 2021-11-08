#include <stdio.h>
int main()
{
    int i = 0, j, k = 9, l = 9, s = -1;
    while (i++ != 9)
    {
        j = i;
        while (j-- != 0)
            printf(" ");

        if (i <= 4)
        {
            j = k;
            while (j-- != 0)
                printf("*");

            j = s;
            if (s == -1)
                printf("\b");
            else
            {
                while (j-- != 0)
                    printf(" ");
            }
            s += 2;

            j = k;
            while (j-- != 0)
                printf("*");
            k -= 2;
        }
        else
        {
            j = l;
            while (j-- != 0)
                printf("*");
            l -= 2;
        }
        printf("\n");
    }
    return 0;
}
