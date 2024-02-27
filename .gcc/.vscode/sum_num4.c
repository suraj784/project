#include <stdio.h>
int main()
{
int a;
printf("enter four digit number\n");
scanf("%d",&a);
int firstDigit,lastDigit,sum;
printf("enter First Digit and Last digit\n");
scanf("%d%d",&firstDigit,&lastDigit);
sum=firstDigit+lastDigit;
printf("sum of first and last digit%d",sum);
return 0;

}