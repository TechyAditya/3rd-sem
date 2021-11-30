#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //sorting starts here
    int smol, temp;
    for (int i = 0; i < n; i++)
    {
        smol = i;
        for (int j = i + 1; j < n; j++)
            if (arr[smol] > arr[j])
                smol = j;
        
        if(smol != i)
        {
            temp = arr[i];
            arr[i] = arr[smol];
            arr[smol] = temp;
        }
    }

    printf("Selection sort: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}