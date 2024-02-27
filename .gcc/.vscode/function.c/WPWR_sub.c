#include <stdio.h>
int sub(int ,int);
int main()
{
    int a, b, sub,ans;
    printf("enter any two value here\n");
    scanf("%d%d", &a, &b);
    ans = sub(a, b);
    printf("sum=%d", sub);
}
int sub(int x, int y)
{
    int sub;
    sub = x - y;
    return sub;
}