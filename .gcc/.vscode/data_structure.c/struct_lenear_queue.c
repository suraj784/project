#include <stdio.h>
typedef struct queue
{
    int arr[5];
    int front;
    int rear;
} queue;

int isempty(queue *obj);
int isfull(queue *obj);
void insert(int data, queue *obj);
void deletion(queue *obj);
void display(queue *obj);
int main()
{
    queue obj;
    obj.front=0;
    obj.rear=0;
    insert(10, &obj);
    insert(20, &obj);
    insert(30, &obj);
    display(&obj);
    printf("#########################\n");
    deletion(&obj);
    deletion(&obj);
    display(&obj);
    printf("##########################\n");
    deletion(&obj);
    deletion(&obj);
    printf("#############################\n");
    insert(100, &obj);
    insert(200, &obj);
    insert(300, &obj);
    display(&obj);
}

int isfull(queue *obj)
{

    if (obj->rear == 5)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(queue *obj)
{
    if (obj->front == obj->rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void insert(int data, queue *obj)
{
    if (isfull(obj))
    {
        printf("queue is full\n");
    }
    else
    {
        obj->arr[obj->rear] = data;
        obj->rear++;
    }
}
void deletion(queue *obj)
{
    if (isempty(obj))
    {
        printf("queue is empty\n");
    }
    else
    {
        obj->front++;
    }
}
void display(queue *obj)
{
    int i;
    if (isempty(obj))
    {
        printf("queue is empty\n");
    }
    else
    {
        for (i = obj->front; i < obj->rear; i++)
        {
            printf("%d\n", obj->arr[i]);
        }
    }
}
