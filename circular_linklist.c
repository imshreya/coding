#include<stdio.h>
struct node
{
    int data;
    struct node*link;
};
struct node*header;
void display();
void insert_f();
void insert_l();
void insert_val(int);
void delete_f();
void delete_l();
void delete_val(int);
void main()
{
    struct node*temp,*ptr;
    int data,n,val,val1;
    temp=malloc(sizeof(struct node));
    printf("enter the no:");
    scanf("%d",&data);
    temp->data=data;
    header=temp;
    temp->link=header;
    n=1;
    while(n==1)
    {
        ptr=malloc(sizeof(struct node));
        printf("enter the no:");
        scanf("%d",&data);
        ptr->data=data;
        ptr->link=header;
        temp->link=ptr;
        temp=ptr;
        printf("for creating a node press 1:");
        scanf("%d",&n);
    }
    display();
    insert_f();
    insert_l();
    printf("enter the no. after which you want to insert the value:");
    scanf("%d",&val);
    insert_val(val);
    delete_f();
    delete_l();
    printf("enter the vlaue that you wanna to delete:");
    scanf("%d",&val1);
    delete_val(val1);
}
void display()
{
    struct node*temp,ptr;
    temp=header;
    while(temp->link!=header)
    {
        printf("->%d",temp->data);
        temp=temp->link;
    }
    printf("->%d",temp->data);
    printf("\n");
}
void insert_f()
{
    struct node*temp,*ptr;
    int data;
    temp=header;
    while(temp->link!=header)
    {
        temp=temp->link;
    }
    ptr=malloc(sizeof(struct node));
    printf("enter the value that you wanna insert at first:");
    scanf("%d",&data);
    ptr->data=data;
    ptr->link=header;
    header=ptr;
    temp->link=header;
    display();
}
void insert_l()
{
    struct node*temp,*ptr;
    int data;
    temp=header;
    while(temp->link!=header)
    {
        temp=temp->link;
    }
    ptr=malloc(sizeof(struct node));
    printf("enter the no that you wanna to insert at last of the list:");
    scanf("%d",&data);
    ptr->data=data;
    temp->link=ptr;
    ptr->link=header;
    display();
}
void insert_val(int val)
{
    struct node*temp,*ptr,*prv;
    int data;
    temp=header;
    while(temp->data!=val)
    {
        prv=temp;
        temp=temp->link;
    }
    ptr=malloc(sizeof(struct node));
    printf("enter the no that you wanna to insert:");
    scanf("%d",&data);
    ptr->data=data;
    ptr->link=temp->link;
    temp->link=ptr;
    display();
}
void delete_f()
{
    struct node*temp;
    int t;
    temp=header;
    while(temp->link!=header)
    {
        temp=temp->link;
    }
    t=header->data;
    header=header->link;
    temp->link=header;
    printf("after deletion of first element of the list:\n");
    display();
    printf("the deleted element is %d\n",t);
}
void delete_l()
{
    struct node*temp,*prv;
    int t;
    temp=header;
    while(temp->link!=header)
    {
        prv=temp;
        temp=temp->link;
    }
    prv->link=header;
    t=temp->data;
    free(temp);
    printf("after deletion of last element of the list:\n");
    display();
    printf("the deleted element is %d\n",t);
}
void delete_val(int val)
{
    struct node*temp,*prv;
    temp=header;
    while(temp->data!=val)
    {
        prv=temp;
        temp=temp->link;
    }
    prv->link=temp->link;
    free(temp);
    display();
}
