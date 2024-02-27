#include <stdio.h>
int main()
{
int sellingprice,costprice;
printf ("enter total selling price\n");
scanf("%d",&sellingprice);
int profit;
printf("enter profit\n");
scanf("%d",&profit);
costprice=sellingprice -profit;
printf("find cost price costprice=%d",costprice);
return 0;
}