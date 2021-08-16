//5. WAP to replace every dynamic array element by multiplication of previous and next of an n element.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter element: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int output[n];
    output[0] = arr[0];
    for (int i = 1; i < n - 1; i++)
        output[i] = (arr[i - 1] * arr[i + 1]);
    output[n - 1] = arr[n - 1];

    printf("New array: [");
    for (int i = 0; i < n; i++)
        printf("%d, ", output[i]);
    printf("\b\b] ");

    return 0;
}