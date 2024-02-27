#include <stdio.h>
int main()
{
int a,b,c,sum;
printf("enter three angles of triangle\n");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
printf("area of triangle=%d",sum);
if (sum<=180)
{
printf("the triangle is valid\n");
}
else;
{
    printf("triangle is not valid\n");
}
return 0;
}