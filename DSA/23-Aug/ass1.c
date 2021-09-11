//1. WAP to store student details (name,roll,branch,perc) using structure
#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    char branch[10];
    float perc;
}s;

void input()
{
    printf("Enter name: ");
    gets(s.name);
    printf("Enter Roll: ");
    scanf("%d", &s.roll);
    printf("Enter Branch: ");
    scanf(" "); //eliminating escape sequence
    gets(s.branch);
    printf("Enter Percentage: ");
    scanf("%f", &s.perc);
}

void output()
{
    printf("Name: %s\n", s.name);
    printf("Roll no: %d\n", s.roll);
    printf("Branch: %s\n", s.branch);
    printf("Percentage: %.2f\n", s.perc);
}

int main()
{
    input();
    output();
    return 0;
}