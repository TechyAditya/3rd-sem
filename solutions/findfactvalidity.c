#include <stdio.h>
int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    int n = 1;
    int flag = 0;
    for (int i = 1; n < a; i++)
    {
        n = n * i;
        if (n == a)
            flag = 1;
    }
    printf("%d", flag);
    return 0;
}