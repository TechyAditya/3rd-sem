//Bubble sort
#include <stdio.h>
int main()
{
    int n, temp, i, j, *num;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);
    for (i = n - 2; i >= 0; i--)
    {
        for (j = 0; j <= i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("Sorted elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", num[i]);
    return 0;
}

