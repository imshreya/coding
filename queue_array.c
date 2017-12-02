#include<stdio.h>
int queue[50];
int front=-1,rear=-1;
void enqueue(int);
void dequeue();
void show();
void main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    show();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    show();
}
void enqueue(int t)
{
    if(rear==49)
    {
        printf("queue is full");
        return;
    }
    if(rear==-1)
    {
        front=rear=0;
        queue[rear]=t;
    }
    else
    {
        queue[++rear]=t;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty");
        return;
    }
    else
    {
        queue[front]=0;
        front++;
    }
}
void show()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("->%d",queue[i]);
    }
    printf("\n");
}
