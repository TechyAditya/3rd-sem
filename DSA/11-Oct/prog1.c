//1. Implement push and pop operation of stack using array
#include <stdio.h>
int stack[10000], n, top;
void push()
{
    if (top < n)
    {
        printf("Enter element to push (-1 to cancel): ");
        int num;
        scanf("%d", &num);
        if (num == -1)
            return;
        stack[++top] = num;
    }
    else
        printf("Stack overflow");
}

void pop()
{
    if (top >= 0)
        stack[top--] = -1;
    else
        printf("Stack is empty");
}

void display()
{
    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    top = -1;
    printf("Enter size of stack: ");
    scanf("%d", &n);
start:
    printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n>>");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        push();
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