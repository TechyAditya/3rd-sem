//to count total number of duplicate elements in an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int A[n], duplicate = 0;
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] == A[j])
            {
                duplicate++;
                break;
            }
        }

    printf("Number of duplicate elements are %d", duplicate);
    return 0;
}