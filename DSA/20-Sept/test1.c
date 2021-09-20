//Write the program to print the middle element of a Link list?
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int data;
} * start, *extra, *ptr;

int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
}

int main()
{
    printf("Enter number of elements: ");
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
            ptr = ptr->next;
        }
    }
    ptr = start;
    for (int i = 0; i < n / 2; i++)
        ptr = ptr->next;
    printf("Middle element is %d\n", ptr->data);
    return 0;
}