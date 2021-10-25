//3. Wap to implement queue using stacks
#include <stdio.h>
#include <stdlib.h>
int n, top, top2, *stack;

void pop()
{
    if (top == -1)
        printf("Queue is empty");
    else
        stack[top--] = -1;
}

void display()
{
    for (int i = top; i > -1; i--)
        printf("%d ", stack[i]);
}

void insert()
{
    if(top == n)
    {
        printf("Queue overflow");
    }
    int num;
    printf("Enter element to insert: ");
    scanf("%d", &num);
    if (top == -1)
    {
        top = 0;
        stack[top] = num;
        return;
    }
    int *temp = (int *)malloc(n * sizeof(int));
    top2 = -1;

    while (top != -1)
    {
        temp[++top2] = stack[top--]; //popping from stack and pushing to temporary stack
    }
    stack[++top] = num; //last element of stack, making it queue
    while(top2 != -1)
    {
        stack[++top] = temp[top2--]; //popping from temporary stack and pushing to original stack
    }
}

int main()
{
    int choice;
    printf("Enter size of queue: ");
    scanf("%d", &n);
    stack = (int *)malloc(n * sizeof(int));
    while (1)
    {
        printf("\n1.Insert element to queue");
        printf("\n2.Delete element from queue");
        printf("\n3.Display all elements of queue");
        printf("\n4.Quit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
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
            printf("Wrong choice");
        }
    }
}