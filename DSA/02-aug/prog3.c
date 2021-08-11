//WAP to find second largest element of array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n], l1, l2 = -1; 
    printf("Enter the elements of an array: ");
    scanf("%d", &arr[0]);
    l1 = arr[0];
    for(int i = 1; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > l1) //largest till the scan
        {
            l2 = l1;
            l1 = arr[i];
        }
        else if (arr[i] > l2) //second largest
            l2 = arr[i];
    }

    printf("Second largest = %d", l2);
    return 0;
}