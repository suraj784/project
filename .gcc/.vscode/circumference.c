#include<stdio.h>
//Take a radius from user and calculate area and circumference?
int main()
{
int pi=3.14,radius,area,circumference;
printf("enter value of radus\n");
scanf("%f%d%f",&pi,&radius,&circumference);
area=3.14*radius*radius;
printf("area of circle=%f",(3.14*radius*radius),area);
circumference=2*3.14*radius;
printf("circumference of circle=%f",&circumference);
return 0;
}