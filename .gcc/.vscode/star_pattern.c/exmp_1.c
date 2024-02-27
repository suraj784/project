# include <stdio.h>
int main()
{
    int no,i,j;
    printf("enter no of rows\n");
    scanf ("%d",&no);
    for(i=1;i<=no;i++)
    {
        for (j=1;j<=no;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}