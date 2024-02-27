#include <stdio.h>
int main()
{
    int no, reverse = 0, remainder;
    printf("enter any no here\n");
    scanf("%d", &no);

    while (no != 0)
    {
        remainder = no % 10;
        reverse = reverse * 10 + remainder;
        no /= 10;
    }

    printf("reverde no = %d", reverse);

    return 0;
}