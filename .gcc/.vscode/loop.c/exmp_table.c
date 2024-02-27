# include <stdio.h>
int main()
{
    int num=10,a;
    printf("enter any num here\n");
    scanf("%d",&num);

    for(a=1;a<=10;a++)
    {
        printf("%d* %d = %d\n",num, a, (num*a));
    }
    return 0;
}