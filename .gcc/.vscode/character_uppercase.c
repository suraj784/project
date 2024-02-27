#include <stdio.h>
int main()
{
    char ch;
printf("write upper case chracter here\n"); 
scanf("%c",&ch);
ch=ch+32;
printf("convert into lower case=%c",ch);
return 0;   
}