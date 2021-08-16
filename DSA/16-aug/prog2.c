//2. Delete element into array
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
    
    int input = 0;
    printf("Enter elements to delete into array, enter -1 to stop:\n");
    while (1)
    {
        scanf("%d", &input);
        if (input == -1)
            break;
        for (int i = 0; i < n; i++)
        {
            if (*(arr + i) == input)
            {
                for (int j = i; j < n; j++)
                    *(arr + j) = *(arr + j + 1); //shifting other elements to left
                
                arr = (int *)realloc(arr, --n * sizeof(int)); //removing last element
            }
        }
    }

    printf("Elements of array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", *(arr + i));
    return 0;
}