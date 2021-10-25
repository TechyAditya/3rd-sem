//2. Wap to implement two stack in an array.
#include <stdio.h>
int stack[10000], m, n, top, top2;
void push()
{
    if (top < m)
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
        printf("Stack 1 is empty");
}

void push2()
{
    if (top2 < m + n)
    {
        printf("Enter element to push (-1 to cancel): ");
        int num;
        scanf("%d", &num);
        if (num == -1)
            return;
        stack[++top2] = num;
    }
    else
        printf("Stack overflow");
}

void pop2()
{
    if (top2 >= m)
        stack[top--] = -1;
    else
        printf("Stack 2 is empty");
}

void display()
{
    printf("Stack 1:\n");
    for (int i = top; i >= 0; i--)
        printf("%d\n", stack[i]);

    printf("Stack 2:\n");
    for (int i = top2; i >= m; i--)
        printf("%d\n", stack[i]);
}

int main()
{
    printf("Enter size of stack 1: ");
    scanf("%d", &m);
    printf("Enter size of stack 2: ");
    scanf("%d", &n);
    top = -1;
    top2 = m - 1;
start:
    printf("\n1. Push Stack 1\n2. Pop Stack 1\n3. Push Stack 2\n4. Pop Stack 2\n5. Display\n6. Exit\n>>");
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
        push2();
        break;
    case 4:
        pop2();
        break;
    case 5:
        display();
        break;
    case 6:
        return 0;
    default:
        printf("Wrong choice, try again");
    }
    goto start;
}
