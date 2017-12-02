#include<stdio.h>
int queue[7];
int front=-1,rear=-1;
void enqueue(int);
void dequeue();
void show();
void main()
{
   // enqueue(1);
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
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    show();
}
void enqueue(int t)
{
    if((front==0&&rear==6)||(front==rear+1))
    {
        printf("queue is full\n");
        return;
    }
    if(front==-1)
    {
        rear=front=0;
        queue[rear]=t;
    }
    if(rear==6)
    {
        rear=0;
        queue[rear]=t;
       // rear++;
    }
    else
    {
        rear=rear+1;
        queue[rear]=t;
    }
}
void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty\n");
        return;
    }
    else
    {
        if(front==6)
        {
        queue[front]=0;
        front=0;
        }
        else
        {
            queue[front]=0;
            front++;
        }
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
