//3. Address of element
#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter size of 2D array: m, n = ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    //int b = &arr; shows cast errors unfortunately in latest compilers, this line works in old compilers
    printf("Enter elements of 2D array: ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    int *ptr = &arr[0][0];
    int data;
    printf("Enter value to search:");
    scanf("%d", &data);

    printf("Base address = %d\n", ptr);

    int pos;
    for(int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if(arr[i][j] == data)
                pos = (i * m + j);// * sizeof(int);

    printf("Required address = %d", ptr + pos); //it's implicitly multiplying sizeof
    return 0;
}