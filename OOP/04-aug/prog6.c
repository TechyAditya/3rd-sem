#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    
    int *ptr;
    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (ptr + i));

    printf("Elements of array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
