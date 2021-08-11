//print all unique elements of an array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int A[n], B[n], temp, x = 0, i, j;
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Unique elements are: ");
    for (i = 0; i < n; i++)
    {
        temp = 0;
        for (j = 0; j < i; j++)
        {
            if (A[i] == A[j])
                break; //elements same
        }
        if (i == j) //0 matches
        {
            B[j - 1] = A[i];
            printf("%d ", A[i]);
        }
    }
    return 0;
}