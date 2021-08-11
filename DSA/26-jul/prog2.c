//find sum of all elements of array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    int A[n], sum = 0;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    
    for (int i = 0; i < n; i++)
        sum += A[i];
    
    printf("Sum = %d\n", sum);
    return 0;
}