/*
Write a function/Pseudo code to swap the following nodes in a circular single Linked List with
minimum number of pointers and having only one pointer head/start to indicate first node
address.
i. 1st node with 2nd node
ii. Last node with its previous node
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * start, *extra, *ptr, *temp;

void create();
void beginsert();
void endinsert();
void posinsert();
void display();
void swap12();
void swaplast();
int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    n++;
}

void menu()
{
    int ch;
    printf("\n1. Create a linked list");
    printf("\n2. Insert node at beginning");
    printf("\n3. Insert node at end");
    printf("\n4. Insert node somewhere");
    printf("\n5. Display linked list");
    printf("\n6. Swap first and second");
    printf("\n7. Swap last and second last");
    printf("\n8. Exit");
    printf("\n>>>");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        create();
        break;
    case 2:
        beginsert();
        break;
    case 3:
        endinsert();
        break;
    case 4:
        posinsert();
        break;
    case 5:
        display();
        break;
    case 6:
        swap12();
        break;
    case 7:
        swaplast();
        break;
    case 8:
        return;
    default:
        printf("Wrong choice\n>>>");
    }
    menu(); //recursive loop till choice is 6
}
void swap12()
{
    temp = start;
    temp = temp->next;
    start->next = temp->next;
    temp->next = start;
    start = temp;
}

void swaplast()
{

    ptr = start;
    while (ptr->next->next->next != NULL)
        ptr = ptr->next;
    temp = ptr->next->next; 
    temp->next = ptr->next; 
    ptr->next->next = NULL; 
    ptr->next = temp; 
}

int main()
{
    menu();
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
        ptr->next = extra;
        ptr = ptr->next;
    }
}

void beginsert()
{
    int item;
    printf("Enter item: ");
    scanf("%d", &item);
    newNode(item);
    ptr = start;
    start = extra;
    extra->next = ptr;
}

void endinsert()
{
    int item;
    printf("Enter item: ");
    scanf("%d", &item);
    newNode(item);
    ptr = start;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = extra;
}

void posinsert()
{
    int item, pos;
    printf("Enter item: ");
    scanf("%d", &item);
    printf("Enter position: ");
    scanf("%d", &pos);
    newNode(item);
    ptr = start;
    for (int i = 0; i < pos - 1; i++)
        ptr = ptr->next;
    temp = ptr->next;
    ptr->next = extra;
    extra->next = temp;
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
