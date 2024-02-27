#include <stdio.h>
int main()
{
    int i, j ,k = 1;
    for (i = 1; i <= 5; i++)
        k = 1;

    {

        for (j = 1; j <= 5; j++)
        {
            if (j <= 6 - i && j <= 4 + i && k)

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}