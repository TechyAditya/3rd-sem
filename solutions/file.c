//fgets-reads whole string
#include<stdio.h>
int main()
{
FILE *pfile=NULL;
char str[60];
pfile=fopen("D:\\My C Programs\\alpha.txt.txt", "r");
if(pfile==NULL);
{
    printf("Error! Could not open file");
    return 0; 
}
while(*str!='\0')
{
    fgets(str,100,pfile);
    printf("%s", str);
    
}

fclose(pfile);
pfile=NULL;
return 0;
}