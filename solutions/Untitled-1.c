//WAP to find majority element
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
        freq = -1;
    }
    int flag = 0;
    freq[0] = 1;
    for (int i = 1; i < n; i++)
    {
        flag = 0;
        for(int j = 0; j < i; j++)
        {
            if (arr[j] = arr[i])
            {
                freq[j]++;
                flag = 1;
                break;
            }
        }
        if(flag = 0)
        {
            freq[i] = 1;
        }
    }
}