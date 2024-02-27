# include <stdio.h>
int main()
{
    int no,i,fact=1;
    printf("enter any no here\n");
    scanf("%d",&no);
    for(i=1; i<=no; i++)
      
         fact=fact*i;
       
       {
        printf("factorial of %d is %d\n",no,fact);
       }
    
    return 0;
}