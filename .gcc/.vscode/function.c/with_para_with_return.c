#include <stdio.h>
int add();
int main()
{
    int a,b,sum;
    printf("enter any two values\n");
    scanf("%d%d",&a, &b);
    sum=add(a,b);
    printf("sum=%d",sum);
}
int add(int x, int y)
{
    int sum;
    sum=x+y;
    return sum;

}
