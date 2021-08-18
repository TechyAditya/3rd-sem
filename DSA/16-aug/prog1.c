//1. Insert element into array
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter initial size of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf ("%d", (arr + i));
    
    int input = 0, pos = -1;
    printf("Enter elements and it's positions to add into array, enter -1 to stop:\n");
    while (1)
    {
        printf(">>>>");
        scanf("%d", &input);
        if (input == -1)
            break;
        
        printf("Pos:");
        scanf("%d", &pos);
        arr = (int *)realloc(arr, ++n * sizeof(int));
        
        for(int i = n - 1; i >= pos; i--)
            *(arr + i) = *(arr + i - 1);
        
        *(arr + pos - 1) = input;
    }

    printf("Elements of array: [");
    for (int i = 0; i < n; i++)
        printf("%d, ", *(arr + i));

    printf("\b\b] ");
    return 0;
}