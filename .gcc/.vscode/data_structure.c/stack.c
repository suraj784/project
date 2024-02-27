#include <stdio.h>

typedef struct stack

{
    int arr[20];
    int top;
} stack;

void push(int ele, stack *obj);
int isfull(stack *obj);
void pop(stack *obj);
int isempty(stack*obj);
void display(stack *obj);
int peak(stack *obj);

int main()
{
    stack obj;
    obj.top = 0;

    push(10, &obj);
    push(20, &obj);
    push(30, &obj);
    display(&obj);
    printf("*****************\n");

    pop(&obj);
    pop(&obj);
    display(&obj);
    push(40, &obj);
    printf("*****************\n");

    display(&obj);
    printf("*******************\n");

    int value = peak(&obj);
    printf("%d\n", value);
}
void push(int ele, stack *obj)
{
    if (isfull(obj))
    {
        printf("stack is full\n");
    }
    else
    {
        obj->arr[obj->top] = ele;
        (obj->top)++;
    }
}
int isfull(stack *obj)
{
    if (obj->top == 20)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void pop(stack *obj)
{
    if (isempty(obj))
    {
        printf("stack is empty\n");
    }
    else
    {
        obj->top--;
    }
}
int isempty(stack *obj)
{
    if (obj->top == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display(stack *obj)
{
    int i;
    if (isempty(obj))
    {
        printf("stack is empty\n");
    }
    else
    {
        for (i = (obj->top - 1); i >= 0; i--)
            ;
        {
            printf("%d\n", obj->arr[i]);
        }
    }
}
int peak(stack *obj)
{
    if (isempty(obj))
    {
        printf("stsck is empty\n");
        return 0;
    }
    else
    {
        return (obj->arr[obj->top - 1]);
    }
}