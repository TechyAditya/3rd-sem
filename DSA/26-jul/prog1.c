//read n number of values in an array and display in reverse
#include <stdio.h>
int main()
{
    printf("Enter n:");
    int n;
    scanf("%d", &n);

    int A[n], B[n];
    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    for (int i = 0; i < n; i++)
        B[i] = A[n - i - 1];

    printf("Reverse elements of array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", B[i]);
    
    return 0;
}