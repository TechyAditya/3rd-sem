//6. WAP to reverse a stack using recursion
#include <stdio.h>
#include <stdlib.h>
int n, top, *stack, *rev;

void push(int x)
{
    if (top == n)
        printf("Stack Overflow");
    else
        stack[++top] = x;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack is empty");
        return -1;
    }
    else
        return stack[top--];
}

void display(int *obj)
{
    for (int i = top; i > -1; i--)
        printf("%d\n", obj[i]);
}

void reverse()
{
    for (int i = 0; i <= top; i++)
    {
        rev[i] = stack[top - i];
    }
    printf("Reversed stack:\n");
    display(rev);
}

int main()
{
    top = -1;
    printf("Enter size of stack: ");
    scanf("%d", &n);
    stack = (int *)malloc(n * sizeof(int));
    rev = (int *)malloc(sizeof(int) * n);
    int ch, num;
start:
    printf("\n1. Push\n2. Pop\n3. Display\n4. Reverse\n>>");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter number: ");
        scanf("%d", &num);
        push(num);
        break;
    case 2:
        pop();
        break;
    case 3:
        display(stack);
        break;
    case 4:
        reverse();
        return 0;
    default:
        printf("Wrong choice, try again");
    }
    goto start;
}
