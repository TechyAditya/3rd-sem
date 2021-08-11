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

    ptr = ptr + n;
    printf("Array in reverse elements: ");
    for (int i = 0; i < n; i++)
    {
        ptr--;
        printf("%d ", *ptr);
    }

    return 0;
}