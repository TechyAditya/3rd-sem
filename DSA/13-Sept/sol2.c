#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev, *next;
    int data;
} * l1, *l1s, *l1e,     //1st list
    *l2, *l2s, *l2e,    //2nd list
    *obj, *objs, *obje, //resultant list
    *extra, *ptr, *ptr1, *ptr2;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    extra->prev = NULL;
}

int main()
{
    printf("Enter 5 elements of first linked list: ");
    for (int i = 0; i < 5; i++)
    {
        int x;
        scanf("%d", &x);
        newNode(x);
        if (i == 0)
        {
            l1s = extra;
            ptr = l1s;
        }
        else if (i == 4)
        {
            l1e = extra;
            l1e->next = l1s;
            l1s->prev = l1e; //completing circular linked list
        }
        else
        {
            ptr->next = extra;
            extra->prev = ptr;
            ptr = ptr->next;
        }
    }
    printf("Enter 5 elements of second linked list: ");
    for (int i = 0; i < 5; i++)
    {
        int x;
        scanf("%d", &x);
        newNode(x);
        if (i == 0)
        {
            l2s = extra;
            ptr = l2s;
        }
        else if (i == 4)
        {
            l2e = extra;
            l2e->next = l2s;
            l2s->prev = l2e; //completing circular linked list
        }
        else
        {
            ptr->next = extra;
            extra->prev = ptr;
            ptr = ptr->next;
        }
    }

    ptr1 = l1s;
    ptr2 = l2s;
    for (int i = 0; i < 10; i++)
    {
        int *x;
        if (i % 2 == 0)
        {
            *x = ptr1->data;
            ptr1 = ptr1->next;
        }
        else
        {
            *x = ptr2->data;
            ptr2 = ptr2->next;
        }
        newNode(*x);

        if (i == 0)
        {
            objs = extra;
            ptr = objs;
        }
        else if (i == 9)
        {
            obje = extra;
            obje->next = objs;
            objs->prev = obje; //completing circular linked list
        }
        else
        {
            ptr->next = extra;
            extra->prev = ptr;
            ptr = ptr->next;
        }
    }

    printf("Combined output: ");
    ptr = objs;
    for (int i = 0; i < 10; i++)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("\b\b");
    return 0;
}