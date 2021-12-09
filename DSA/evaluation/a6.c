//A-6. Write a program to remove all occurrences of a given element from a double linked list. (Display both the original and the linked list after deletion).
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} * start, *extra, *ptr, *temp, *temp1, *temp2;

void create();
void display();
int num, n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    extra->prev = NULL;
    n++;
}

void del(int num)
{
    ptr = start;
    while (ptr != NULL)
    {
        if (ptr->data == num)
        {
            temp = ptr;
            temp1 = ptr->next;
            temp2 = ptr->prev;
            temp1->prev = temp2;
            temp2->next = temp1;
            ptr = temp2;
            free(temp);
        }
        else
            ptr = ptr->next;
    }
}

//Driver code
int main()
{
    create();
    printf("Enter element to remove from the linked list: ");
    scanf("%d", &num);
    printf("\nElements before deletion: ");
    display();
    del(num);
    printf("\nElements after deletion: ");
    display();
    return 0;
}

void create()
{
    int item;
    printf("Enter 1st item: ");
    scanf("%d", &item);
    newNode(item);

    start = extra;
    ptr = start;
    while (1)
    {
        printf("Enter value of next node, -1 to end: ");
        scanf("%d", &item);
        if (item == -1)
            break;
        newNode(item);
        temp = ptr;
        ptr->next = extra;
        ptr = ptr->next;
        ptr->prev = temp;
    }
}

void display()
{
    ptr = start;
    while (ptr)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("\b\b  ");
}
