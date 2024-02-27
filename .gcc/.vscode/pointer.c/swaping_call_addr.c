#include <stdio.h>
void swap(int *, int *);
int main()
{
    int a, b;
    printf("enter any two values\n");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("main=> after swap a=%d, b=%d", a, b);
}
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *y = temp;

    printf("after swap a=%d, b=%d\n", *x, *y);
}