//Find missing number from the given series of number
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n];
    printf("Enter unique elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //processing each elements
    int size = sizeof(arr)/sizeof(arr[0]);
    int number = 1, found, missing;
    while (number < size)
    {
        found = 0;
        for (int i = 0; i < n; i++)
        {
            if (number == arr[i])
            found = 1;
        }
        if(found)
            number++;
        else
        {
            missing = number;
            break;
        }
    }

    printf("Missing number = %d", missing);
    return 0;
}