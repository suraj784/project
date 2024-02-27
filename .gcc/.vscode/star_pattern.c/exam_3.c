# include<stdio.h>
int main()
{int no,i,j;
    printf("enter num row\n");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        for(j=1;j<=no+1-i;j++)
       
        {
        printf("* ");
        }
        
    printf("\n");}
    return 0;
}