//A-2. Write a program to perform following string operations without using library functions. (1. Concatenation, 2. Copy, 3. Reverse, 4. Length of the string)
#include <stdio.h>
char String1[100], String2[100], String[100];
void input(char string[])
{
    printf("Enter string: ");
    scanf("%s", string);
}

void conc()
{
    printf("Enter string 1:\n");
    scanf("%s", String1);
    printf("Enter string 2:\n");
    scanf("%s", String2);
    int i, j;
    for (i = 0; String1[i] != '\0'; i++)
        String[i] = String1[i];

    String[i++] = ' '; //adding space

    for (j = 0; String2[j] != '\0'; i++, j++)
        String[i] = String2[j];

    String[i] = '\0'; //ending string
    printf("Concatenated string: %s", String);
}

void copy() //simple copy paste
{
    printf("Enter string: ");
    scanf("%s", String1);
    int i;
    for (i = 0; String1[i] != '\0'; i++)
        String2[i] = String1[i];
    String2[i] = '\0';
    printf("Copy string: %s", String2);
}

int Length(char string[]) //find length
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
        ;
    return ++i;
}

void reverse() 
{
    printf("Enter string: ");
    scanf("%s", String1);
    int len = Length(String1);
    int i, j = len - 2; //setting j as last element instead of \0
    for (i = 0; i < len - 1; i++, j--)
        String2[i] = String1[j];
    String2[i] = '\0'; //end of the string
    printf("Reverse: %s", String2);
}

int main()
{
    printf("MENU\n1. Concatenation\n2. Copy\n3. Reverse\n4. Length of string\n>>");
    int ch;
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        conc();
        break;
    case 2:
        copy();
        break;
    case 3:
        reverse();
        break;
    case 4:
        printf("Enter string: ");
        scanf("%s", String);
        printf("Length = %d", Length(String));
        break;
    }
}