//8. WAP to insert an element into a sorted stack at it's respective position
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

void sort(int top)
{
    for (int i = 1; i <= top; i++)
    {
        if (stack[i - 1] < stack[i])
        {
            int temp = stack[i - 1];
            stack[i - 1] = stack[i];
            stack[i] = temp;
            sort(top);
        }
    }
}

int main()
{
    top = -1;
    printf("Enter size of stack: ");
    scanf("%d", &n);
    stack = (int *)malloc(n * sizeof(int));
    int ch, num;
start:
    printf("\n1. PUSH\n2. POP\n3. SORT\n4. INSERT\n5. DISPLAY\n>>");
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
        sort(top);
        printf("The sorted stack is:\n");
        display();
        break;
    case 4:
        printf("Enter number: ");
        scanf("%d, ", &num);
        sort(top);
        printf("New stack is:\n");
        display();
        break;
    case 5:
        return 0;
    default:
        printf("Wrong choice, try again");
    }
    goto start;
}
