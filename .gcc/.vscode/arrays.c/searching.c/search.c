#include <stdio.h>
void scan(int *arr);
void search(int data, int *arr);
int main()
{
    int arr[10], data;
    scan(arr);
    printf("enter the value do you want to search\n");
    scanf("%d", &data);
    search(data, arr);
}
void scan(int *arr)
{
    int i;
    printf("enter eny 10 values here\n");
    for (i = 0; i <= 10; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void search(int data, int *arr)
{
    int i, flag = 0;
    for (i = 0; i <= 10; i++)
    {
        if (arr[i] == data)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("element is found\n");
    }
    else
    {
        printf("element is not found\n");
    }
}
