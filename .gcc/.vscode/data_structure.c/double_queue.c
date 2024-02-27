#include <stdio.h>
typedef struct queue
{
    int arr[5];
    int front;
    int rear;
}queue;

int main()
{
    queue obj;
    obj.front=0;
    obj.rear=0;
}
int isfull(queue *obj);
{
    if(front==rear)
    {
    return 1;
}
else{
    return 0;

}
insert_by_using_front(int data, queue *obj);
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

}