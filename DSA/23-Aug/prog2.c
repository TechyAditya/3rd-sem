#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int *ptr = (int *)malloc(n * sizeof(int));
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", ptr + i);
    printf("Reverse elements of array: [");
    for (int i = n - 1; i >= 0; i--)
        printf("%d, ", *(ptr + i));
    
    printf("\b\b] ");
    return 0;
}