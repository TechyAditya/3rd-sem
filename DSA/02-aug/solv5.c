#include <stdio.h>
void teastall(int choice)
{
    switch (choice)
    {
        case 1: printf("You have selected the tea. ");
                break;
        case 2: printf("You have selected the coffee. ");
                break;
        default: printf("Invalid choice. ");
    }
}

int main()
{
    int ch;
    printf("1. Tea\n");
    printf("2. Coffee\n");
    printf("Enter the choice: ");
    scanf("%d", &ch);
    teastall(ch);
    return 0;
}