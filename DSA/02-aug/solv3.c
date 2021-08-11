#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter unique elements of array1: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr1[i]);

    printf("Enter unique elements of array2: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);
    
    //processing each element
    int found, uni[n], intersect[n], u = 0, in = 0;
    //scanning array 1
    for(int i = 0; i < n; i++)
    {
        found = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] == arr2[i])
            {
                found = 1;
                break;
            }
        }
        if (found)
        {
            uni[u] = arr1[i];
            u++;
        }
        else
        {
            intersect[in] = arr1[i];
            in++;
        }
    }
    //scanning array 2
    for(int i = 0; i < n; i++)
    {
        found = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr2[j] == arr1[i])
            {
                found = 1;
                break;
            }
        }
        if (found)
            continue; //union elements are already there, 69 IQ
        else
        {
            intersect[in] = arr1[i];
            in++;
        }
    }

    printf("\nUnion elements: ");
    for (int i = 0; i < u; i++)
        printf("%d ", uni[i]);
    
    printf("\nIntersect elements: ");
    for (int i = 0; i < in; i++)
        printf("%d ", intersect[i]);

    return 0;
}