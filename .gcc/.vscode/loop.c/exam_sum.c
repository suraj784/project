# include <stdio.h>
int main()
{
    int no,i;
    printf("enter any number here\n");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        printf("%d+%d=%d\n",no,i,(no+i));
    }
    return 0;
}