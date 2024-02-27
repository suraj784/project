#include <stdio.h>
int main()
{
    int b,h,s,area;
    printf("inter three sites of triangle here\n");
    scanf("%d%d%d",&b,&h,&s);
    area=b+h+s;
    if(area==60)
    {
        printf("tringle is equilateral triangle\n");
    }
    if(area==180)
    {
        printf("triangle is isosceles triangle\n");
    }
    
    if (area==90)
    {
        printf("triangle is right angle triangle\n");
    }
    
    return 0;
}