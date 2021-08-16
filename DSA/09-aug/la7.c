/*LA-7
Let A be nXn square dynamic matrix. WAP by using appropriate user defined functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, x;
    printf("Enter the width of the matrix: ");
    scanf("%d", &n);

    int *ptr = (int *)malloc(n * n * sizeof(int)); //2d array
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", (ptr + (i * n) + j));

    printf("Entered matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d\t", *(ptr + (i * n) + j));
        printf("\n");
    }
    //a. number of non-zero elements
    int ctr = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (*(ptr + (i * n) + j) != 0)
                ctr++;

    printf("\na. Number of non-zero elements are %d", ctr);

    //b. sum of elements above leading diagonal
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (j > i)
                sum += *(ptr + (i * n) + j);

    printf("\nb. Sum of elements above diagonal is %d", sum);

    //c. elements below minor diagonal
    printf("\nc. Elements below minor diagonal are:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= (n - i))
                printf("%d\t", *(ptr + (i * n) + j));
            else
                printf("\t");
        }
        printf("\n");
    }

    //d. product of diagonal elements
    int product = 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (i == j)
                product *= *(ptr + (i * n) + j);

    printf("\nd. Product of diagonal elements is %d", product);

    //the end
    return 0;
}
