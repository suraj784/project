#include <stdio.h>
int main()
{
    int year;
    printf("enter year here\n");
    scanf("%d", &year);

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("%d it is leap year\n", year);
    }
    else
    {
        printf("%d it is not leap year\n", year);
    }
    return 0;
}