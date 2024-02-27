# include <stdio.h>
int main()
{
    int x,y,i,p=1;
    printf("enter any number here\n");
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    p*=x;
    {
        printf("%d\n",p);
    }
    return 0;
}