//4. WAP to implement a stack using single queue.
#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct
{
    int data[MAX];
    int front;
    int rear;
} Queue;

Queue q1;

int insert(Queue *q, int num)
{
    if (q->rear == MAX - 1)
    {
        printf("Queue is full\n");
        return 1;
    }
    if (q->rear == -1)
    {
        q->front = q->rear = 0;
        q->data[q->rear] = num;
    }
    else
    {
        q->rear++;
        q->data[q->rear] = num;
    }
    return 0;
}

int del(Queue *q, int *m)
{
    if (q->front == -1)
    {
        printf("Q is empty\n");
        return 1;
    }
    if (q->front == q->rear)
    {
        *m = q->data[q->front];
        q->front = q->rear = -1;
    }
    else
    {
        *m = q->data[q->front];
        q->front++;
    }
    return *m;
}

void display(Queue q)
{
    int i;
    if (q.front == -1)
        printf("Queue is empty \n");
    else
    {
        for (i = q.front; i <= q.rear; i++)
            printf("%d ", q.data[i]);
        printf("\n");
    }
}

int isEmpty(Queue q)
{
    return (q.front == -1) ? 1 : 0;
}

int push(int v)
{
    return insert(&q1, v);
}

int pop()
{
    int p = isEmpty(q1);
    if (p)
        return p;
    int i = q1.front;
    int j = q1.rear;
    while (i != j)
    {
        int n;
        del(&q1, &n);
        insert(&q1, n);
        i++;
    }
    int n;
    return del(&q1, &n);
}

int main()
{
    q1.front = q1.rear = -1;
    int ch, num;
    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n>>");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            printf("%d has been removed", pop());
            break;
        case 3:
            display(q1);
            break;
        case 4:
            return 0;
        }
    }
}