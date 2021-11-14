/*
Let a linked list consists of n number of nodes, where each node consists of an unique character
represents the grades of the students (O, E, A, B, C ), and pointer to next node. Write pseudo code/ C
code to group the students having same grade in consecutive place and also finally all the nodes should be
in sorting order as per their grade value. (O>E>A>B>C)
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    char grade;
    int point;
    struct node *next;
} Node;

Node *first = 0, *last = 0;

void create(char x)
{
    first = (Node *)malloc(sizeof(Node));
    first->grade = x;
    first->next = 0;
    last = first;
}

void insert(char x)
{
    Node *p = 0;
    p = (Node *)malloc(sizeof(Node));
    p->grade = x;
    p->next = 0;
    last->next = p;
    last = p;
}

void swap(Node *p, Node *q)
{
    char t = p->grade;
    int t2 = p->point;
    p->grade = q->grade;
    p->point = q->point;
    q->grade = t;
    q->point = t2;
}

void sort()
{
    Node *p = first, *q = 0;
    while (p)
    {
        q = p->next;
        while (q)
        {
            if (p->point < q->point)
                swap(q, p);
            q = q->next;
        }
        p = p->next;
    }
}

void assign()
{
    Node *p = first;
    while (p)
    {
        if (p->grade == 'O')
            p->point = 5;
        if (p->grade == 'E')
            p->point = 4;
        if (p->grade == 'A')
            p->point = 3;
        if (p->grade == 'B')
            p->point = 2;
        if (p->grade == 'C')
            p->point = 1;
        if (p->grade == 'D')
            p->point = 0;
        if (p->grade == 'F')
            p->point = -1;
        p = p->next;
    }
}

void display()
{
    Node *p = first;
    while (p)
    {
        printf("%c - %d\n", p->grade, p->point);
        p = p->next;
    }
}
int main()
{
    create('A');
    insert('B');
    insert('C');
    insert('O');
    insert('E');
    assign();
    sort();
    display();
}
