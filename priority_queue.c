#include<stdio.h>
typedef struct
{
    int data;
    int priority;
}element;
struct node
{
    element a;
    struct node*link;
};
void create(int,int);
void pri();
struct node*front,*rear;
void main()
{
    int n,priority,data,i;
    printf("enter the no. of values that you want to insert\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the data :");
        scanf("%d",&data);
        printf("enter the priority :");
        scanf("%d",&priority);
        create(data,priority);
    }
    show();
}
void create(int data,int priority)
{
    struct node*temp,*ptr;
    temp=malloc(sizeof(struct node));
    temp->a.data=data;
    temp->a.priority=priority;
    temp->link=NULL;
    if(front==NULL&&rear==NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        pri(&temp);
        ptr=front;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        rear=ptr->link;
    }
}
void pri(struct node* temp)
{
    struct node*cpt,*ptr;
    int temp1,temp2;
    cpt=front;
     if(cpt->link==NULL)
        {
            if(cpt->a.priority<temp->a.priority)
            {
            temp->link=cpt;
            front=temp;
            rear=cpt;
            }
            else
            {
               cpt->link=temp;
               front=cpt;
               rear=temp;
            }
            return;
        }
    while(cpt->link!=NULL)
    {
        ptr=cpt;
        if(cpt->a.priority<temp->a.priority)
        {
            if(cpt==front)
            {
                temp->link=cpt;
                front=temp;
            }
            if(cpt==rear)
            {
                temp->link=cpt;
            }
            else
            {
                temp->link=cpt;
                ptr->link=temp;
            }
            return;
        }
        else
     {
        cpt=cpt->link;
     }
        if(cpt->link==NULL)
        {
            cpt->link=temp;
        }
    }
}
void show()
{
    struct node*temp;
    temp=front;
    while(temp!=NULL)
    {
        printf("->%d",temp->a.data);
        temp=temp->link;
    }
}
