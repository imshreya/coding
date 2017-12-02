#include<stdio.h>
struct queue
{
    int data;
    struct queue*link;
};
struct queue*front,*rear;
void show();
void enqueue(int);
void dequeue();
void main()
{
    enqueue(5);
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    show();
    dequeue();
    dequeue();
    show();
}
void enqueue(int t)
{
    struct queue*temp;
    temp=malloc(sizeof(struct queue));
    temp->data=t;
    if(front==NULL)
    {
        front=rear=temp;
        temp->link=NULL;
    }
    else
    {
        rear->link=temp;
        rear=temp;
        rear->link=NULL;
    }
}
void dequeue()
{
    if(front==NULL)
    {
        printf("queue is empty");
        return;
    }
    if(front==rear)
    {
        front=rear=NULL;
        return;
    }
    else
    {
        front=front->link;
    }
}
void show()
{
    struct queue*temp;
    temp=front;
    while(temp->link!=NULL)
    {
        printf("->%d",temp->data);
        temp=temp->link;
    }
    printf("->%d",temp->data);
    printf("\n");
}
