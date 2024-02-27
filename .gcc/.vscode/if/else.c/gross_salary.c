#include <stdio.h>
int main()
{
float TA=10,DA=20,HRA=15,BasicSalary,GS,tax;
printf("enter basic salary here\n");
scanf("%f",&BasicSalary);
BasicSalary=0.1*BasicSalary+0.2*BasicSalary+0.15*BasicSalary;
printf("GS=%f",BasicSalary);


if(GS>250000)
{
printf("diduct tax 10 percent from BasicSalary\n");
tax=GS*10/100;
printf("%d",tax);
}
else;
{
printf("Do not diduct any tax\n");
}
return 0;
}