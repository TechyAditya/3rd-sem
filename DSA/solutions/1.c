//WAP to delete duplicate nodes from double circular linked List
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} * start, *end, *extra, *ptr, *temp, *ptr2;

void create();
void display();
void begdel();
void enddel();
void posdel(int);
int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    extra->prev = NULL;
    n++;
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
    ptr2 = start;
    start = start->next;
    start->prev = NULL;
    free(ptr2);
    n--;
}

void enddel()
{
    temp = end;
    end = end->prev;
    end->next = start;
    start->prev = end;
    free(temp);
    n--;
}

void posdel(int pos)
{
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
    ptr2 = temp->prev;
    ptr2->next = temp->next;
    free(temp);
}

int main()
{
    create();
    ptr = start;
    for (int i = 0; i < n; i++)
    {
        ptr2 = ptr;
        for (int j = i + 1; j < n; j++)
        {
            ptr2 = ptr2->next;
            if (ptr2->data == ptr->data)
                posdel(j);
        }
        ptr = ptr->next;
    }
    display();
    return 0;
}
