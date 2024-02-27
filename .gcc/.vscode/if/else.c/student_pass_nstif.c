#include <stdio.h>
int main()
{
    int phy,che,math,total,per;
    printf("enter given marks here\n");
    scanf("%d%d%d",&phy,&che,&math);
    total=phy+che+math;
    per=total*100/300;
    
  

    if(per<=35)
    {
        printf("student fail in all subject\n");

    }
    if()
    {
        printf("student fail in perticular sub,Yes\n");
    }
    if(per>=35)
    {
        printf("student pass in all subject\n");
    }


    return 0;
    

    


}