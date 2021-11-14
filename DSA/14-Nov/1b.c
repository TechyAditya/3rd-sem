//Write the difference between Array and Linked List. Given singly linked list with every node having an additional pointer named as  ̳"multiply" that currently points to NULL. Need to make the "Multiply" pointer point to the next multiplied value of the current node. If multiplied value is not present, then keep it NULL 
#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
    struct node *multiply;
} Node;

Node *start = 0, *last = 0;
void MUL_Link()
{
    Node *temp2 = 0, *temp1 = start;
    while (temp1 != 0)
    {
        temp2 = temp1->next;
        while (temp2 != 0)
        {
            if (temp2->data % temp1->data == 0)
            {
                temp1->multiply = temp2;
                break;
            }
            else
                temp1->multiply = NULL;
            temp2 = temp2->next;
        }
        temp1 = temp1->next;
    }
}

void create(int x)
{
    Node *p = 0;

    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->next = 0;
    p->multiply = 0;
    if (start == 0)
        start = p;
    last = p;
}

void insert(int x)
{
    Node *p = 0;
    p = (Node *)malloc(sizeof(Node));
    p->data = x;
    p->next = 0;
    p->multiply = 0;
    last->next = p;
    last = p;
}

void display()
{
    Node *p = start;
    printf("Actual List: ");
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    p = start;
    while (p)
    {
        if (p->multiply)
            printf("\nData: %d   \tMultiple: %d", p->data, p->multiply->data);
        p = p->next;
    }
}

int main()
{
    create(5);
    insert(6);
    insert(11);
    insert(70);
    insert(140);
    MUL_Link();
    display();
}
