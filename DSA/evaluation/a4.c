//A-4. Write a program to implement quick sort considering median is the pivot element.
#include <stdio.h>
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int pivot_last(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            swap(&arr[++i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

int pivot_midean(int arr[], int low, int high)
{

    int pivot;
    int mid = (low + high) / 2;
    if (arr[mid] < arr[low])
    {
        swap(&arr[mid], &arr[low]);
    }
    if (arr[high] < arr[low])
    {
        swap(&arr[high], &arr[low]);
    }
    if (arr[high] < arr[mid])
    {
        swap(&arr[high], &arr[mid]);
    }
    swap(&arr[mid], &arr[high - 1]);
    pivot = arr[high - 1];
    return pivot_last(arr, low, high);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = pivot_midean(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main()
{
    int arr[100];
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter elements of array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    quickSort(arr, 0, size - 1);

    printf("Array after Sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}