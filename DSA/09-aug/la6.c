//LA-6. Given a dynamic array, WAP to print the next greater element (NGE) for every element. The next greater element for an element x is the first greater element on the right side of x in array. 
#include <stdio.h>
int main()
{
    int n, big;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("\nElement\tNGE\n");
    for (int i = 0; i < n; i++)
    {
        big = -1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                big = arr[j];
                break;
            }
        }
        printf("%d\t%d\n", arr[i], big);
    }

    return 0;
}
