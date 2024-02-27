#include <stdio.h>
void add(); 
int main()
{
    add();
    return 0;
}
void add()
{
    int a, b, sum;
    printf("enter any 2 values\n");
    scanf("%d%d", &a, &b);
    sum = a + b;
    printf("sum=%d", sum);
}