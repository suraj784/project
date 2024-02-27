#include <stdio.h>
void add(int, int);
int main()
{
    int a, b;
    printf("enter any any two value\n");
    scanf("%d%d", &a, &b);
    add(a, b);
    return 0;
}
void add(int x, int y)
{
    int sum;
    sum = x + y;
    printf("sum=%d", sum);
}