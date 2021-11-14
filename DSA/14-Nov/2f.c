//Write a function to delete all prime numbers present in a doubly linked list. For example, if input: 5->6->11->4->12->16, then output 6->4->12->16.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
    struct node *prev;
} *start = NULL, *last = NULL;

void create(int x)
{
    start = (struct node *)malloc(sizeof(struct node));
    start->info = x;
    start->prev = 0;
    start->next = 0;
    last = start;
}

void insert(int x)
{
    struct node *p = 0;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = x;
    p->next = 0;
    p->prev = last;
    last->next = p;
    last = p;
}

void display()
{
    struct node *p = start;

    while (p->next)
    {
        printf("%d -> ", p->info);
        p = p->next;
    }
    printf("%d\n", p->info);
}

int isPrime(int n)
{
    int flag = 0, i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return 1;
    else
        return 0;
}

void Delprime()
{
    struct node *temp = start, *t1 = 0;
    while (temp)
    {
        if (isPrime(temp->info) == 0)
            temp = temp->next;
        else
        {
            t1 = temp->next;
            if (temp->prev)
                temp->prev->next = temp->next;
            if (temp->next)
                temp->next->prev = temp->prev;
            free(temp);
            temp = t1;
        }
    }
}

int main()
{
    create(4);
    insert(5);
    insert(8);
    insert(7);
    insert(10);
    insert(12);
    insert(11);
    printf("Actual List: ");
    display();
    printf("\nFinal List: ");
    Delprime();
    display();
}
