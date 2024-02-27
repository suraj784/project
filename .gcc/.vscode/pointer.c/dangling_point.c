#include <stdio.h>
int *add(int, int);
int main()
{
    int a, b;
    int *ptr;
    printf("enter any two value\n");
    scanf("%d%d", &a, &b);
    ptr = add(a, b);
    printf("%d", *ptr);
    
}
int *add(int x, int y)
{
    int sum;
    sum = x + y;
    return &sum;
}