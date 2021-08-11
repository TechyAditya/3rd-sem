#include <stdio.h>
int main()
{
    int n, i;
    float basic_pay, gross_pay, hr, da;
    char name[50];
    char gender;
    char desig[50];
    char depart[50];
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEmployee %d:- \n", i - 1);
        printf("Enter Name: ");
        scanf("%s", name);
        printf("Enter Gender: ");
        scanf(" %c", &gender);
        printf("Enter Department: ");
        scanf("%s", depart);
        printf("Enter Designation: ");
        scanf("%s", desig);
        printf("Enter Basic Pay: ");
        scanf("%f", &basic_pay);
        hr = 0.25 * basic_pay;
        da = 0.75 * basic_pay;
        gross_pay = basic_pay + hr + da;
        printf("\nName- %s", name);
        printf("\nGender- %c", gender);
        printf("\nDesignation- %s ", desig);
        printf("\nDepartment- %s", depart);
        printf("\nGross Salary- %f", gross_pay);
    }
}