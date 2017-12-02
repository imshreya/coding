#include<stdio.h>
struct node
{
    struct node*p1;
    int a;
    struct node*p2;
};
void display();
void delete_f();
void delete_l();
void create_val(int);
void insert_f();
void insert_l();
void delete_val(int);
struct node*header;
void main()
{
    struct node*temp,*ptr;
    int data,n,val,val1;
    temp=malloc(sizeof(struct node));
    printf("enter the data again :");
    scanf("%d",&data);
    temp->a=data;
    temp->p1=NULL;
    temp->p2=NULL;
    header=temp;
    n=1;
    while(n==1)
    {
        ptr=malloc(sizeof(struct node));
        printf("enter the data again :");
        scanf("%d",&data);
        ptr->a=data;
        temp->p2=ptr;
        temp->p1=ptr;
        ptr->p1=temp;
        ptr->p2=header;
        temp=ptr;
        printf("to create a new node press 1:");
        scanf("%d",&n);
    }
    display();
    printf("enter the no. after which you want to insert the value :");
    scanf("%d",&val);
    create_val(val);
    printf("enter the no. that you want to delete in the created list :");
    scanf("%d",&val1);
    delete_val(val1);
    delete_f();
    delete_l();
    insert_f();
    insert_l();
}
void display()
{
    struct node*temp;
    temp=header;
    while(temp->p2!=header)
    {
        printf("->%d",temp->a);
        temp=temp->p2;
    }
    printf("->%d",temp->a);
    printf("\n");
}
void create_val(int val)
{
    struct node*temp,*ptr;
    int data;
    temp=header;
    while(temp->a!=val)
    {
        temp=temp->p2;
    }
    ptr=malloc(sizeof(struct node));
    printf("enter the value that you want to insert :");
    scanf("%d",&data);
    ptr->a=data;
    ptr->p1=temp;
    ptr->p2=temp->p2;
    temp->p2=ptr;
    display();
}
void delete_val(int val)
{
    struct node*temp;
    temp=header;
    while(temp->a!=val)
    {
        temp=temp->p2;
    }
    (temp->p1)->p2=temp->p2;
    (temp->p2)->p1=temp->p1;
    free(temp);
    display();
}
void delete_f()
{
    struct node*temp;
    temp=header;
    while(temp->p2!=header)
    {
        temp=temp->p2;
    }
    (header->p2)->p1=temp;
    header=header->p2;
    temp->p2=header;
    printf("after deleting first element : \n");
    display();
}
void delete_l()
{
    struct node*temp;
    temp=header;
    while(temp->p2!=header)
    {
        temp=temp->p2;
    }
    (temp->p1)->p2=header;
    header->p1=temp->p1;
    free(temp);
    printf("after deleting the last element of the list :\n");
    display();
}
void insert_f()
{
    struct node*temp,*ptr;
    int data;
    temp=header;
    while(temp->p2!=header)
    {
        temp=temp->p2;
    }
    ptr=malloc(sizeof(struct node));
    printf("enter the value that you want to insert at first :");
    scanf("%d",&data);
    ptr->a=data;
    ptr->p1=temp;
    ptr->p2=header;
    header=ptr;
    temp->p2=header;
    display();
}
void insert_l()
{
    struct node*temp,*ptr;
    int data;
    temp=header;
    while(temp->p2!=header)
    {
        temp=temp->p2;
    }
    ptr=malloc(sizeof(struct node));
    printf("enter the no. that you want to insert at last:");
    scanf("%d",&data);
    ptr->a=data;
    temp->p2=ptr;
    ptr->p1=temp;
    ptr->p2=header;
    display();
}
