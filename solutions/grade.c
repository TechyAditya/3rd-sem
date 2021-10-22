#include <stdio.h>
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);
    char grade;
    switch (marks / 100)
    {
    case 1:
        grade = 'E';
        break;
    case 2:
        grade = 'D';
        break;
    case 3:
        grade = 'C';
        break;
    case 4:
        grade = 'B';
        break;
    case 5:
        grade = 'A';
        break;
    default:
        printf("Invalid marks.");
        return 0;
    }
    printf("Grade: %c", grade);
    return 0;
}
