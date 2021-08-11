#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            index1 = i + 1;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == y)
        {
            index2 = i + 1;
            break;
        }
    }
    
    return 0;
}