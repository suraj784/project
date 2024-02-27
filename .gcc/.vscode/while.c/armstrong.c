#include <stdio.h>
int main()
{
    int n, r, arm = 0, i;
    printf("enter any number here\n");
    scanf("%d", &n);
    i = n;

    while (n = 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n / 10;
    }
    if (n == arm)
    {
        printf("it is armstrong number");
    }
    else
    {
        printf("it is not armstrog number");
    }

    return 0;
}