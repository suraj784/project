#include<stdio.h>
//Take a radius from user and calculate area and circumference?
int main()
{
float radius,area;
const float pi=3.14;
printf("enter value of radius\n");
scanf("%f",&radius);
area=pi*radius*radius;
printf("area of circle=%f",(pi*radius*radius),area);
return 0;
}