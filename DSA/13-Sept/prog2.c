/*
Write a menu driven program to perform the following operations in a circular 1-way linked list:-
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
    n++;
}

void menu()
{
    int ch;
    printf("\n1. Create a 1-way circular linked list");
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
    start->next = extra;
    end = start;
    end->next = start;

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
        end = extra;
        end->next = start;
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
    end->next = start;
}

void endinsert()
{
    int item;
    printf("Enter item: ");
    scanf("%d", &item);
    newNode(item);

    ptr = start;
    while (ptr->next != end)
        ptr = ptr->next;
    ptr = ptr->next;

    end = extra;
    end->next = start;
    ptr->next = end;
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
    ptr->next = extra;
}

void display()
{
    ptr = start;
    while (ptr != end)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
}

void begdel()
{
    ptr = start;
    start = start->next;
    free(ptr);
    n--;
}

void enddel()
{
    temp = start;
    while (temp->next != start)
    {
        ptr = temp;
        temp = temp->next;
    }
    end = ptr;
    end->next = start;
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
    {
        ptr = temp;
        temp = temp->next;
    }
    ptr->next = temp->next;
    free(temp);
}
