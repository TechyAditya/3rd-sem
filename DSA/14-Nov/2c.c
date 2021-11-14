// WAP to find maximum element of stack at a particular instant when any number of push and pop operation is allowed using linked list such that each top node will contain the maximum element from all elements below to it.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    int current_max;
    struct node *link;
} *top = NULL;

void push(int item)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    if (!temp)
    {
        printf("\nHeap is full: Overflow condition");
        return;
    }
    temp->info = item;
    if (top == NULL)
        temp->current_max = temp->info;
    else if (top->current_max < temp->info)
        temp->current_max = temp->info;
    else
        temp->current_max = top->current_max;
    temp->link = top;
    top = temp;
}

void pop()
{
    struct node *temp;
    if (top == NULL)
    {
        printf("\nStack underflow");
        return;
    }
    temp = top;
    top = top->link;
    temp->link = NULL;
    free(temp);
}

void max_elem()
{
    if (top == NULL)
        printf("Stack is empty");
    else
        printf("Max element is %d", top->current_max);
}

int main()
{
    int ch, x;
    printf("\nMENU\n1. PUSH\n2. POP\n3. MAX\n4. EXIT\n>>");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Enter element to push: ");
        scanf("%d", &x);
        push(x);
        break;
    case 2:
        pop();
        break;
    case 3:
        max_elem();
        break;
    case 4:
        return 0;
    }
}
