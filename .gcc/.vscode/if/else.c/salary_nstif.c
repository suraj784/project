#include <stdio.h>
int main()
{
    int sa;
    printf("enter your salary here\n");
    scanf("%d",&sa);
    if(sa>=20000 && sa<=30000)
    {
        printf("software engineer\n");
    }
    if(sa>=31000 && sa<=45000)
    {
        printf("senior software engineer\n");
    }
    if(sa>=45000)
    {
        printf("team leader\n");
    }
    return 0;


}