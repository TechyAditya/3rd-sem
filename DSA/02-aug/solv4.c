#include <stdio.h>
int even()
{
    int sum = 0;
    for (int i = 100; i <= 250; i += 2)
        sum += i;
    return sum;
}

int avg()
{
    int ctr = 0;
    for (int i = 100; i <= 250; i += 2)
        ctr++;
    int average = even() / ctr;
    return average;
}

int main()
{
    printf("Sum of even numbers between 100-250 is %d\n", even());
    printf("Average of even numbers between 100-250 is %d\n", avg());
    return 0;
}