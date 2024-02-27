#include <stdio.h>
int main()
{
    int celcius,fahrenheit;
    printf("enter celcius value\n");
    scanf("%d",&celcius);
    fahrenheit=(celcius*9/5) + 32;
    printf("temperature=%d",fahrenheit);
    return 0;
}