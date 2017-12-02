#include<stdio.h>
#define MAX_QUEUE_SIZE 8
typedef struct
{
    int key;
}element;
element queue[MAX_QUEUE_SIZE];
int rear=0;
int front=0;
void deleteq();
void addq(element);
void main()
{
element a,item;
 int i,n,no;
 no=MAX_QUEUE_SIZE-1;
 printf("maximum %d insertion can take place in the queue\n",no);
 do
 {
 printf("enter the no, that you want to insert in queue\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%d",&a);
     addq(a);
 }
 show();
 printf("enter the no, that you want to deletion in queue\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  deleteq();
 }
 show();
 printf("if you again perform the operation press 1:");
 scanf("%d",&n);
 }while(n==1);
}
void addq(element item)
{
    int i;
    i=rear;
    rear=(rear+1)%MAX_QUEUE_SIZE;
    if(front==rear)
    {
        printf("queue is full\n");
        rear=i;
        return;
    }
    queue[rear]=item;
   // if(front==-1)
       // front=0;
}
void deleteq()
{
    element item;
    if(front==rear)
    {
        printf("queue is empty\n");
        return;
    }
    front=(front+1)%MAX_QUEUE_SIZE;
}
void show()
{
    if(front==rear)
    {
        printf("queue is empty\n");
    }
    else
    {
    int i=front+1;
    while(i!=rear)
    {
        printf("%d\t",queue[i]);
        i=(i+1)%MAX_QUEUE_SIZE;
    }
    printf("%d\t",queue[i]);
    printf("\n");
    }
}
