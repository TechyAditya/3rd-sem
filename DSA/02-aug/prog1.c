//wap to count frequency of each element of an array
#include <stdio.h>
int main()
{
    int n, count;
    printf("Enter n:");
    scanf("%d", &n);
    int arr[n], freq[n];
    printf("Enter elements in array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1; //nullifying frequency
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }

        if (freq[i] != 0)
            freq[i] = count;
    }

    printf("Frequencies: \n");
    for (int i = 0; i < n; i++)
    {
        if (freq[i] != 0)
            printf("%d - %d times\n", arr[i], freq[i]);
    }
    return 0;
}
