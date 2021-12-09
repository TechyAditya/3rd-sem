#include <stdio.h>
int *num;
void bubble(int base, int n)
{
    int temp;
    for (int i = n - 2; i >= base; i--)
    {
        for (int j = base; j <= i; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
}
void selection(int base, int n)
{
    int smol, temp;
    for (int i = base; i < n; i++)
    {
        smol = i;
        for (int j = i + 1; j < n; j++)
            if (arr[smol] > arr[j])
                smol = j;

        if (smol != i)
        {
            temp = arr[i];
            arr[i] = arr[smol];
            arr[smol] = temp;
        }
    }
}
void main()
{
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &num[i]);

    bubble(0, (n / 2));
    selection(n / 2 + 1, n);
    //itna he kr skta, mera class time ho gaya 
    return 0;
}