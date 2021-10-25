//4. WAP to implement a stack using single queue.
#include <stdio.h>
#include <stdlib.h>

int *queue;
int rear = -1;
int front = -1;
int n;

void push(int num)
{
    int i = -1;
    while (rear != front - 1)
    {
        temp[++i] = queue[rear--];
    }
    temp[++i] = num;
    while (i != -1)
    {
        queue[++rear] = temp[i--];
    }
}

void insert(int num)
{
    if (rear == n - 1)
        printf("Stack Overflow\n");
    else
    {
        if (front == -1)
        {
            front = 0;
            rear = 0;
            queue[rear] = num;
            return;
        }
        push(num);
    }
}

void del()
{
    if (front == -1 || front > rear)
    {
        printf("Stack Underflow\n");
        return;
    }
    else
    {
        printf("%d deleted", queue[front]);
        front = front + 1;
    }
}

void display()
{
    int i;
    if (front == -1)
        printf("Queue is empty");
    else
    {
        printf("Queue is:");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main()
{
    printf("Enter size of stack: ");
    scanf("%d", &n);
    queue = (int *)malloc(2* n * sizeof(int));
    int ch, num;
start:
    printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. EXIT\n>>");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter number: ");
        scanf("%d", &num);
        insert(num);
        break;
    case 2:
        del();
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
