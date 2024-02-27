#include <stdio.h>
int main()
{
    int no, a, b;
    printf("enter three digit number\n");
    scanf("%d", &no);
    a = no % 10;
    no = no / 10;
    b = no % 10;
    no = no / 10;
    no = a * 100 + b * 10 + no;

    printf("result=%d\n", no);

    return 0;
}