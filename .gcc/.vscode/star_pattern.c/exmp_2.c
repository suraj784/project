#include <stdio.h>
int main()
{
    int no, i, j;
    printf("enter no of row\n");
    scanf("%d", &no);
    for (i = 1; i <= no; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}