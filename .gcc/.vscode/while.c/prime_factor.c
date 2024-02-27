#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("enter positive integer\n");
    scanf("%d", n);
    printf("prime factor=%d", n);
    while (n < 1)
    {
        if (n % i == 0)
        {
            printf("%d", i);
             n /= i;
        }
        else
        {
            i++;
        }
    }

    printf("\n");
    return 0;
}