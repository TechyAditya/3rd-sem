//4. WAP to convert infix expression to prefix expression
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Stack
{
    int size, top;
    char *Stk;
} Stack;
Stack s1, s2;

void create(Stack *s)
{
    s->size = 100;
    s->Stk = (char *)malloc(s->size * sizeof(char));
    s->top = -1;
}
void push(Stack *s, char x)
{
    if (s->top < (s->size - 1))
    {
        s->Stk[++s->top] = x;
    }
    else
        printf("\nStack Full\n");
}

char pop(Stack *s)
{
    char x = -1;
    if (s->top == -1)
        printf("Stack is Empty\n");

    else
    {
        x = s->Stk[s->top];
        s->Stk[s->top] = 0;
        s->top--;
    }
    return x;
}

void infix_to_postfix(char *s)
{
    int i = 0;
    char a;
    i = strlen(s);
    for (i = i - 1; i >= 0; i--)
    {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '(' || s[i] == ')')
        {
            if (s1.top != -1 && (s[i] == '-' || s[i] == '+') && (s1.Stk[s1.top] == '*' || s1.Stk[s1.top] == '^' || s1.Stk[s1.top] == '/' || s1.Stk[s1.top] == '-' || s1.Stk[s1.top] == '+'))
            {
                do
                {
                    a = pop(&s1);
                    push(&s2, a);
                } while ((s1.Stk[s1.top] == '*' || s1.Stk[s1.top] == '^' || s1.Stk[s1.top] == '/' || s1.Stk[s1.top] == '-' || s1.Stk[s1.top] == '+') && s1.top != -1);
                push(&s1, s[i]);
            }
            else if ((s[i] == '*' || s[i] == '/') && (s1.Stk[s1.top] == '*' || s1.Stk[s1.top] == '/' || s1.Stk[s1.top] == '^'))
            {
                do
                {
                    a = pop(&s1);
                    push(&s2, a);
                } while ((s1.Stk[s1.top] == '*' || s1.Stk[s1.top] == '^' || s1.Stk[s1.top] == '/') && s1.top != -1);
                push(&s1, s[i]);
            }
            else
                push(&s1, s[i]);
        }

        else
            push(&s2, s[i]);

        if (s1.top != -1 && s1.Stk[s1.top] == '(')
        {
            do
            {
                a = pop(&s1);
                if (a != '(')
                    push(&s2, a);
            } while (s1.Stk[s1.top] != ')');
            pop(&s1);
        }
    }
    if (s1.top != -1)
    {
        do
        {
            a = pop(&s1);
            push(&s2, a);
        } while (s1.top != -1);
    }
}
void display(Stack *s)
{
    int i;
    printf("\n");
    if (s->top == -1)
        printf("Stack Empty !!!\n");
    for (i = s->top; i >= 0; i--)
        printf("%c ", s->Stk[i]);
}

int main()
{
    create(&s1);
    create(&s2);
    char s[100];
    printf("Enter Expression : ");
    scanf("%s", s);
    infix_to_postfix(s);
    display(&s2);
    return 0;
}
