//Write a code to add two polynomial having two numbers of unknown variables.
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value, coeff;
    char var;
    struct node *next;
} Node;
Node *first1 = 0, *first2 = 0;

Node *create(Node *first, int n)
{
    int i, x_count = 0, y_count = 0;
    Node *p;
    p = (Node *)malloc(n * sizeof(Node));
    for (i = 0; i < n; i++)
    {
        printf("Enter value : ");
        scanf("%d", &p[i].value);
        if (p[i].value != 0)
        {
            printf("Enter variable : ");
            scanf(" %c", &p[i].var);
        }

        if ((p[i].var == 'x' || p[i].var == 'X') && i != 0)
        {
            x_count++;
            p[i].coeff = x_count;
        }
        else if (p[i].var == 'y' || p[i].var == 'Y')
        {
            y_count++;
            p[i].coeff = y_count;
        }

        if (i == 0)
        {
            p[i].next = &p[i + 1];
            p[i].coeff = i;
            p[i].var = 0;
            first = &p[i];
        }
        else if (i == n - 1)
            p[i].next = 0;

        else
            p[i].next = &p[i + 1];
    }
    p[i - 1].next = 0;

    return first;
}

void display(Node *first)
{
    Node *p = first;
    if (p->value != 0)
        printf("%d + ", p->value);
    p = p->next;
start:
    while (p->next)
    {
        if (p->value == 0)
        {
            p = p->next;
            goto start;
        }
        printf("%d", p->value);
        printf("%c^%d + ", p->var, p->coeff);
        p = p->next;
    }

    printf("%d", p->value);
    printf("%c^%d\n", p->var, p->coeff);
}

void add(Node *p, Node *q)
{
    Node *t = 0;
    while (p && q)
    {
        if (p->var == q->var)
            p->value += q->value;

        else
        {
            t = (Node *)malloc(sizeof(Node));
            t->value = q->value;
            t->var = q->var;
            t->coeff = q->coeff;
            t->next = p->next;
        }
        p = p->next;
        q = q->next;
    }
}

int main()
{
    int n, m;
    printf("Enter no. of terms (1st Polynomial) : ");
    scanf("%d", &n);
    first1 = create(first1, n);
    printf("Enter no. of terms (2nd Polynomial): ");
    scanf("%d", &m);

    first2 = create(first2, m);
    printf("\n1) ");
    display(first1);
    printf("\n2) ");
    display(first2);
    add(first1, first2);
    printf("\nSum is: ");
    display(first1);
    return 0;
}
