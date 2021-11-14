//Write a C program to add two triplets and print the result in another triplet format using the array.
#include <stdio.h>
int main()
{
    int a[3] = {1, 2, 3}, b[3] = {4, 5, 6};
    int c[3];
    for (int i = 0; i < 3; i++)
        c[i] = a[i] + b[i];
    printf("%d,%d,%d", c[0], c[1], c[2]);
    return 0;
}
