//Write the program to reverse a double link list?
#include <stdio.h>
#include <stdlib.h>
struct node
{
    struct node *next, *prev;
    int data;
} * start, *extra, *ptr, *temp;

int n = 0;

void newNode(int item)
{
    extra = (struct node *)malloc(sizeof(struct node));
    extra->data = item;
    extra->next = NULL;
    extra->prev = NULL;
}

void reverse(struct node **head_ref)
{
    struct node *current = *head_ref;
   
    while (current != NULL)
    {
    temp = current->prev;
    current->prev = current->next;
    current->next = temp;            
    current = current->prev;
    }
    
    
    if(temp != NULL )
        *head_ref = temp->prev;
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
            extra->prev = ptr;
            ptr = ptr->next;
        }
    }

    reverse(&start);

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
