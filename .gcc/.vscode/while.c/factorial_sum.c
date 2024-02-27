#include <stdio.h>
int main()
{
    int n,fact=1,sum;
    printf("enter any number here\n");
    scanf("%d",&n);
    fact=n;
    while(n=0)
    
       fact=n*(n-1)*1;
    {
       printf("fact=%d",fact);
    
    }
    sum=n+fact;
    n++;
    
    printf("sum=%d",sum);

    return 0;
}