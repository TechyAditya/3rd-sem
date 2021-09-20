//Write the program to remove the duplicate elements from an unsorted link list?
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next;
    int data;
} * start, *extra, *ptr, *temp;

int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
}

void removeDuplicates()
{
    ptr = start;
    while (ptr != NULL)
    {
        struct node *temp = ptr;
        while (temp->next != NULL)
        {
            if (ptr->data == temp->next->data)
            {
                temp->next = temp->next->next;
                n--;
            }
            else
            {
                temp = temp->next;
            }
        }
        free(temp->next);
        ptr = ptr->next;
    }
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
            ptr = ptr->next;
        }
    }

    removeDuplicates();

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