//Let  ̳"m" number of stacks are implemented in one array where m is the size of each ith stack. Write a pseudo code/function for the push() and pop() operations on ith stack.
#include <stdio.h>
#include <stdlib.h>
int top[100], m;
int stack[10000];
void push(int i, int item)
{
    int max_upperbound = -1;
    for (int k = 0; k < i; k++)
        max_upperbound = max_upperbound + 100;
    if (top[i - 1] > i * 100 || top[i - 1] < (i - 1) * 100) //garbage top
        top[i - 1] = max_upperbound - 100;

    if (top[i - 1] == max_upperbound)
    {
        printf("\nOverflow condition");
        return;
    }
    top[i - 1]++;
    stack[top[i - 1]] = item;
}

void pop(int i)
{
    int min_lowerbound = -1;
    for (int k = 0; k < i - 1; k++)
        min_lowerbound = min_lowerbound + 100;

    if (top[i - 1] == min_lowerbound)
    {
        printf("\nUnderflow condition");
        return;
    }
    printf("\nDeleted element is %d", stack[top[i - 1]]);
    top[i - 1]--;
}

void display(int i)
{
    int j;
    int min_lowerbound = -1;
    for (int k = 0; k < i - 1; k++)
        min_lowerbound = min_lowerbound + 100;

    if (top[i - 1] == min_lowerbound)
    {
        printf("\nStack is empty");
        return;
    }
    for (j = top[i - 1]; j > min_lowerbound; j--)
    {
        printf("%d\n", stack[j]);
    };
}

int main()
{
    int ch, x, i;
    while (1)
    {
        printf("\nMENU\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n>>");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter stack number: ");
            scanf("%d", &i);
            printf("Enter element to push: ");
            scanf("%d", &x);
            push(i, x);
            break;
        case 2:
            printf("Enter stack number: ");
            scanf("%d", &i);
            pop(i);
            break;
        case 3:
            printf("Enter stack number: ");
            scanf("%d", &i);
            display(i);
            break;
        case 4:
            return 0;
        }
    }
}
