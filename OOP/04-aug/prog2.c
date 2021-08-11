#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int array[n];
    printf("\nEnter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &array[i]);

    int *ptr;
    ptr = array;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }

    printf("\nThe sum is: %d", sum);
}