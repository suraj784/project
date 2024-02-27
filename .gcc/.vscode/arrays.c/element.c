#include <stdio.h>

int main()
{
    int n;

    printf("enter size of array here\n");
    scanf("%d", &n);
    int arr[n];
    printf("enter value=%d\n", n);
    for (int i = 0; i < n; ++i)
    {
        printf("value %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    int i;
    for (i = 0; i < n; ++i)
    {
        sum=sum + arr[i];
    }
    printf("sum of all values = %d\n", sum);
    return;
}