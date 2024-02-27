#include<stdio.h>
int main()
{
    int n;
    printf("enter number here\n");
    scanf("%d",&n);
    int i;
    int j;
    for(i=0;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(j>=i)
            printf("* ");
        }
        
        {
            printf("\n");
        }
    }
    return 0;
}