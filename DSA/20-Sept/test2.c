//Write the program to merge two sorted linked list to produce a sorted linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int data;
} * l1, *l1s,    //1st list
    *l2, *l2s,   //2nd list
    *obj, *objs, //resultant list
    *extra, *ptr, *ptr1, *ptr2;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
}

int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter %d elements of first linked list: ", n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        newNode(x);
        if (i == 0)
        {
            l1s = extra;
            ptr = l1s;
        }
        else
        {
            ptr->next = extra;
            ptr = ptr->next;
        }
    }
    printf("Enter %d elements of second linked list: ", n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        newNode(x);
        if (i == 0)
        {
            l2s = extra;
            ptr = l2s;
        }
        else
        {
            ptr->next = extra;
            ptr = ptr->next;
        }
    }

    ptr1 = l1s;
    ptr2 = l2s;
    for (int i = 0; i < n + n; i++)
    {
        int x;
        if(ptr2 == NULL) //last element
        {
            x = ptr1->data;
            ptr1 = ptr1->next;
        }
        else if(ptr1 == NULL)
        {
            x = ptr2->data;
            ptr2 = ptr2->next;
        }
        else if (ptr1->data > ptr2->data)
        {
            x = ptr2->data;
            ptr2 = ptr2->next;
        }
        else
        {
            x = ptr1->data;
            ptr1 = ptr1->next;
        }
        newNode(x);
        if (i == 0)
        {
            objs = extra;
            ptr = objs;
        }
        else
        {
            ptr->next = extra;
            ptr = ptr->next;
        }
    }

    printf("Output: ");
    ptr = objs;
    for (int i = 0; i < n + n; i++)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("\b\b  ");
    return 0;
}
