//to find max and min element of array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements of array:");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int min = arr[0], max = arr[0]; //let
    for (int i = 1; i < n; i++)
    {
        if(min < arr[i])
            min = arr[i];
        
        if(max > arr[i])
            max = arr[i];
    }

    printf("Max = %d, Min = %d", max, min);
    return 0;
}