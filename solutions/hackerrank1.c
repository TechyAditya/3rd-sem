#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *readline();
char *ltrim(char *);
char *rtrim(char *);

int parse_int(char *);

/*
 * Complete the 'longestSubarray' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int longestSubarray(int arr_count, int *arr)
{
    int array[arr_count];
    for (int i = 0; i < arr_count; i++)
        array[i] = *(arr + i);
        
    int t1 = array[0], t2 = -1, t3 = -1, t4 = -1, ctr = 0;
    for (int i = 1; i < arr_count; i++)
    {
        if (array[i] == t1)
            t2 = array[i];
        if (array[i] == t1 + 1 || array[i] == t1 - 1)
            t3 = array[i];
    }
    return 0;
}

int main()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    *arr = 0;
    *(arr + 1) = 1;
    *(arr + 2) = 2;
    *(arr + 3) = 1;
    *(arr + 4) = 2;
    *(arr + 5) = 3;
    longestSubarray(6, arr);

    return 0;
}
