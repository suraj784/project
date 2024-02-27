#include <stdio.h>
void scan(int *arr);
void bsearch(int data, int *arr);
int main()
{
    int arr[10], data;
    scan(arr);
    printf("enter value which you want\n");
    scanf("%d", &data);
    bsearch(data, arr);
}
void scan(int *arr)
{
    int i;
    printf("enter any 10 values\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void bsearch(int data, int *arr)
{
    int beg = 0;
    int end = 9;
    int mid;
    int flag;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (data == arr[mid])
        {
            flag = 1;
            break;
        }
        else
        {
            if (data < arr[mid])
            {
                beg = mid - 1;
            }
            else
            {
                if (data > arr[mid])
                {
                    beg = mid + 1;
                }
            }
        }
    }
    if (flag == 1)
    {
        printf("elemen is found\n");
    }
    else
    {
        printf("element is not found\n");
    }
}
