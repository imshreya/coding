#include<stdio.h>
struct node
{
    struct node*p1;
    int a;
    struct node*p2;
};
struct node*header;
void display();
void delete_f();
void delete_l();
void delete_val();
void main()
{
    struct node*temp,*ptr;
    int a,n,val;
    temp=malloc(sizeof(struct node));
    printf("enter the no.");
    scanf("%d",&a);
    temp->a=a;
    header=temp;
    temp->p1=NULL;
    temp->p2=NULL;
    n=1;
    while(n==1)
    {
        ptr=malloc(sizeof(struct node));
        printf("enter  the value again");
        scanf("%d",&a);
        ptr->a=a;
        ptr->p2=NULL;
        ptr->p1=temp;
        temp->p2=ptr;
        temp=ptr;
        printf("for creation of a node press 1 :");
        scanf("%d",&n);
    }
    display();
    delete_f();
    delete_l();
    printf("enter the value that you wanna to delete from the list\n");
    scanf("%d",&val);
    delete_val(val);
}
void display()
{
    struct node*temp,*ptr;
    temp=header;
    while(temp->p2!=NULL)
    {
        printf("->%d",temp->a);
        temp=temp->p2;
    }
    printf("->%d",temp->a);
    printf("\n");
}
void delete_f()
{
    struct node*temp;
    temp=header;
    header=temp->p2;
    free(temp);
    display();
}
void delete_l()
{
    struct node*temp,*prv;
    temp=header;
    while(temp->p2!=NULL)
    {
        temp=temp->p2;
    }
    prv=temp->p1;
    prv->p2=NULL;
    free(temp);
    display();
}
void delete_val(int val)
{
   struct node*temp,*ptr;
   temp=header;
   while(temp->a!=val)
   {
       temp=temp->p2;
   }
   ptr=temp->p1;
   ptr->p2=temp->p2;
   free(temp);
   display();
}
