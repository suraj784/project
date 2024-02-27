#include <stdio.h>
int main()
{
int principle,rate,time,simpleinterest;
printf("enter values of principle rate time\n");
scanf("%d%d%d" ,&principle,&rate,&time);
simpleinterest=(principle*rate*time)/100;
printf("si =%d",simpleinterest);
return 0;
}