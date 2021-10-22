#include <stdio.h>
double basic;
int age;
float hra, da;

void hra_da()
{
    if (basic <= 10000)
    {
        if (age <= 35)
        {
            hra = 0.2; //20%
            da = 0.75; //75%
        }
        else if (age > 45)
        {
            hra = 0.25; //25%
            da = 0.85;  //85%
        }
        else //age 36-45
        {
            hra = 0.2; //20%
            da = 0.8;  //80%
        }
    }
    else if (basic <= 20000)
    {
        if (age <= 45)
        {
            hra = 0.25; //25%
            da = 0.8;   //80%
        }
        else //age 45+
        {
            hra = 0.25; //25%
            da = 0.9;   //90%
        }
    }
    else //basic 20000+
    {
        hra = 0.3; //30%
        da = 0.9;  //90%
    }
}

double total_salary()
{
    hra_da();
    return (basic + (hra * basic) + (da * basic));
}

int main()
{
    printf("Enter Basic: ");
    scanf("%lf", &basic);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Total salary= Rs %.2lf", total_salary());
    return 0;
}
