/*
Write a function in C or Pseudo code: DeleteFromEnd() in a header linked list, where one Node structure to store an integer value and the special designated node (i.e. header node) contains three
information: number of nodes in the list and the maximum, minimum among the list of values. These
values must be updated, if required, in every function call. At the beginning define the structure of both
the nodes.
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

typedef struct hnode
{
    int count, max, min;
    Node *next;
} hnode;

hnode *first = 0;
Node *last = 0;

void create(int x)
{
    Node *p = 0;
    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->next = 0;
    last = p;
    first = (hnode *)malloc(sizeof(hnode));
    first->next = p;
    first->count = 1;
    first->max = x;
    first->min = x;
}

void insert_at_end(int x)
{
    Node *q = 0;
    q = (Node *)malloc(sizeof(Node));
    q->data = x;
    q->next = 0;
    last->next = q;
    last = q;
    first->count++;
    if (first->min > x)
        first->min = x;
    if (first->max < x)
        first->max = x;
}
void delete_from_end()
{
    Node *q = first->next;

    if (first->max == last->data)
    {
        first->max = INT_MIN;
        while (q->next != last)
        {
            if (first->max < q->data)
                first->max = q->data;
            q = q->next;
        }
    }
    q = first->next;

    if (first->min == last->data)
    {
        first->min = INT_MAX;
        while (q->next != last)
        {
            if (first->min > q->data)
                first->min = q->data;
            q = q->next;
        }
    }

    q = first->next;
    while (q->next != last)
        q = q->next;

    q->next = 0;
    free(last);
    last = q;
    first->count--;
}

int main()
{
    create(5);
    insert_at_end(6);
    insert_at_end(11);
    insert_at_end(2);
    insert_at_end(-2);
    insert_at_end(-11);
    insert_at_end(112);
    printf("Count: %d   Max: %d\tMin:%d\n", first->count, first->max, first->min);
}
