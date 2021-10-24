//2. Implement push and pop operation of stack using linked list
#include <stdio.h>
#include <stdlib.h>
int n, top, *stack;

void push(int x)
{
    if (top == n)
        printf("Stack Overflow");
    else
        stack[++top] = x;
}

void pop()
{
    if (top == -1)
        printf("Stack is empty");
    else
        stack[top--] = -1;
}

void display()
{
    for (int i = top; i > -1; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    top = -1;
    printf("Enter size of stack: ");
    scanf("%d", &n);
    stack = (int *)malloc(n * sizeof(int));
    int ch, num;
start:
    printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n>>");
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
        display();
        break;
    case 4:
        return 0;
    default:
        printf("Wrong choice, try again");
    }
    goto start;
}
