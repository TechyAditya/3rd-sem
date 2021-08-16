//3. Address of element
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter size of 2D array: m, n = ");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    int base = &arr[0][0];
    
    
    return 0;
}