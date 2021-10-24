//10. WAP to implement queue using linked list
//9. WAP to implement queue using array
#include <stdio.h>
#include <stdlib.h>

int *queue_array;
int rear = -1;
int front = -1;

void insert()
{
    int item;
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;
        printf("Inset the element in queue: ");
        scanf("%d", &item);
        rear = rear + 1;
        queue_array[rear] = item;
    }
}

void del()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }
    else
    {
        printf("%d deleted", queue_array[front]);
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
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}

int main()
{
    int choice;
    printf("Enter maximum size of queue: ");
    int n;
    scanf("%d", &n);
    queue_array = (int *)malloc(n * sizeof(int));
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
            del();
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
