#include<stdio.h>
#define MAX_QUEUE_SIZE 8
typedef struct
{
    int key;
}element;
element queue[MAX_QUEUE_SIZE];
int rear=-1;
int front=-1;
element deleteq();
void addq(element);
void main()
{
 element a,item;
 int i,n;
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
 item=deleteq();
 printf("%d\n",item);
 }
 show();
}
void addq(element item)
{
if(rear==MAX_QUEUE_SIZE-1)
{
    printf("queue is full");
    return;
}
queue[++rear]=item;
}
element deleteq()
{
    if(front==rear)
    {
        printf("queue is empty\n");
        return;
    }
    return queue[++front];
}
void show()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
