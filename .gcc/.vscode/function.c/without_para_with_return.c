#include <stdio.h>
int add();
int main()
{
    int sum;
    sum = add();
    printf("sum=%d", sum);
    return 0;
}
int add()
{
    int a, b;
    int sum;
    printf("enter any two value\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    return sum;
}