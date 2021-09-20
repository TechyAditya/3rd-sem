//Write the program to swap the first node from beginning of a double link list with the last node of the same double link list?
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next, *prev;
    int data;
} * start, *extra, *ptr;

int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    extra->prev = NULL;
}

int main()
{
    printf("Enter n:");
    scanf("%d", &n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        newNode(x);
        if (i == 0)
        {
            start = extra;
            ptr = start;
        }
        else
        {
            ptr->next = extra;
            extra->prev = ptr;
            ptr = ptr->next;
        }
    }

    ptr = start;
    for (int i = 0; i < n - 1; i++)
        ptr = ptr->next;

    ptr->next = start->next;
    start->prev = ptr->prev;
    ptr->next->prev = ptr;
    start->prev->next = start;
    ptr->prev = NULL;
    start->next = NULL;
    
    start = ptr;

    printf("Output: ");
    ptr = start;
    for (int i = 0; i < n; i++)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("\b\b  ");
    return 0;
}