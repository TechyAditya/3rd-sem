//WAP to store student in roll no and cgpa in a stack in sorted rollno and display
#include <stdio.h>
#include <stdlib.h>
struct Student
{
    int rollno, cgpa;
};
struct Student temp;
int main()
{
    int n;
    printf("Enter maximum number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    int top = -1;
    while (1)
    {
        printf("\n1. PUSH\n2. POP\n3. DISPLAY\n4. Exit\n>>");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            top++;
            printf("For student %d: Enter rollno and cgpa: ", top + 1);
            scanf("%d%d", &s[top].rollno, &s[top].cgpa);
            for (int i = top; i > 0 && s[i].rollno > s[i - 1].rollno; i--)
            {
                temp = s[i];
                s[i] = s[i - 1];
                s[i - 1] = temp;
            }
            break;
        case 2:
            top--;
            break;
        case 3:
            printf("\nStudents stack:\nRoll no   \tCGPA\n");
            for (int i = top; i >= 0; i--)
                printf("%d\t%d\n", s[i].rollno, s[i].cgpa);
            break;
        case 4:
            return 0;
        default:
            printf("Wrong choice\n");
        }
    }
}
