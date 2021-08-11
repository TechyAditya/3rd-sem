//WAP to separate odd and even number in separate arrays
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n], odd[n], even[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    //processing each element of array
    int o = 0, e = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[e] = arr[i];
            e++;
        }
        else
        {
            odd[o] = arr[i];
            o++;
        }
    }
    
    printf("\nOdd elements of array: ");
    for (int i = 0; i < o; i++)
        printf("%d ", odd[i]);

    printf("\nEven elements of array: ");
    for (int i = 0; i < e; i++)
        printf("%d ", even[i]);

    return 0;
}