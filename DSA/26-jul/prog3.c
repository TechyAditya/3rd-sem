//copy the elements of array into another array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int A[n], B[n];
    printf("Enter elements of first array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);

    for (int i = 0; i < n; i++)
        B[i] = A[i];
    
    printf("Elements of second array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", B[i]);

    return 0;
}