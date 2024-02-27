#include<stdio.h>
int main() 
{
    int n;
    
    printf("enter any charater here\n");
    scanf("%c",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {char ch;
        for(j=1;j<=i;j++)
        {
            printf("%c");
        }
        printf("\n");
    }
    return 0;
}