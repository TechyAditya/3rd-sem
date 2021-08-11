#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of array- \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements- \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int nge, i, j;
    for (i = 0; i < n; i++)
    {
        nge = -1;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                nge = arr[j];
                break;
            }
        }

        printf("%d | %d\n", arr[i], nge);
    }
    return 0;
}


/*#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int arr[n], arr1[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; i + j < n; j++)
        {
            if (arr[i] > arr[i + j])
                arr1[i] = i + j;
        }
    }

    printf("\nElement\tNGE\n");
    for (int i = 0; i < n; i++)
    {
        int j = arr1[i];
        printf("%d\t%d\n", arr[i], arr[j]);
    }

    return 0;
}
*/