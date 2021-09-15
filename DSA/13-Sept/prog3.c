/*
Write a menu driven program to perform the following operations in a double linked list:-
(a)Creating a linked list
(b)Inserting a node at the beginning of the linked list
(c)Inserting a node at the end of the linked list
(d)Inserting a node at a specific location in the linked list
(e)Delete from beginning
(f)Delete from end
(g)Delete from a specific location
(h)Display the linked list
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} * start, *end, *extra, *ptr, *temp;

void create();
void beginsert();
void endinsert();
void posinsert();
void display();
void begdel();
void enddel();
void posdel();
int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    extra->prev = NULL;
    n++;
}

void menu()
{
    int ch;
    printf("\n1. Create a double linked list");
    printf("\n2. Insert node at beginning");
    printf("\n3. Insert node at end");
    printf("\n4. Insert node somewhere");
    printf("\n5. Delete from beginning");
    printf("\n6. Delete from end");
    printf("\n7. Delete in specific location");
    printf("\n8. Display linked list");
    printf("\n9. Exit");
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
        begdel();
        break;
    case 6:
        enddel();
        break;
    case 7:
        posdel();
        break;
    case 8:
        display();
        break;
    case 9:
        return;
    default:
        printf("Wrong choice\n>>>");
    }
    menu(); //recursive loop till choice is 6
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

    //for single element
    start = extra;
    start->prev = extra;
    start->next = extra;
    end = extra;
    end->prev = extra;
    end->next = extra;

    //adding more elements
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

        end = extra;
        end->next = start;
        start->prev = end;
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
    start->next = ptr;
    ptr->prev = start;

    start->prev = end;
    end->next = start;
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
    temp = ptr;
    ptr->next = extra;
    ptr->prev = temp;
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
    extra->next = temp;
    temp->prev = extra;
    extra->prev = ptr;
    ptr->next = extra;
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

void begdel()
{
    ptr = start;
    start = start->next;
    start->prev = NULL;
    free(ptr);
    n--;
}

void enddel()
{
    temp = start;
    while(temp->next != NULL)
        temp = temp->next;
    ptr = temp->prev;
    ptr->next = NULL;
    free(temp);
    n--;
}

void posdel()
{
    int pos;
    printf("Enter position: ");
    scanf("%d", &pos);

    //validity check
    if (pos >= n || pos < 0)
    {
        printf("Out of range\n");
        return;
    }

    if (pos == n - 1)
    {
        enddel();
        return;
    }

    if (pos == 0)
    {
        begdel();
        return;
    }

    //logic starts here
    temp = start;
    for (int i = 0; i < pos; i++)
        temp = temp->next;
    ptr = temp->prev;
    ptr->next = temp->next;
    free(temp);
}
