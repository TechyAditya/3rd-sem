#include <stdio.h>
int main()
{
    char c[]= "PSPC2011";
    char *p = c;
    printf("%s\n", p + p[3] - p[1]);
}