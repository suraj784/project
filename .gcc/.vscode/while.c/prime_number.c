#include <stdio.h>
int main()
{
    int no;
    printf("enter a number\n");
    scanf("%d", &no);
    int i=2 ;
    while (i <= no / 2)
    {
        if (no % 2 == 1)
        {
            printf("it is a  prime number\n");
        }
        else
        {
            printf("it is not prime number\n");
        }
        i++;
    }
    return 0;
}