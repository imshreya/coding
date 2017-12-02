#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
void display();
struct node*header;
void main()
{
    struct node *temp,*ptr;
   int data,n,v1,v2,r,i;
   temp=malloc(sizeof(struct node));
   printf("enter the value\n");
   scanf("%d",&data);
   temp->data=data;
   temp->link=NULL;
   header=temp;
   n=1;
   while(n==1)
   {
   	ptr=malloc(sizeof (struct  node));
   	printf("enter the value again:");
   	scanf("%d",&data);
   	ptr->data=data;
   	ptr->link=NULL;
   	temp->link=ptr;
   	temp=ptr;
   	printf("if you want to create again press 1 :");
   	scanf("%d",&n);
   }
   display();
   reverse(header);
}
void display()
{
	struct node*temp;
	temp=header;
	while(temp!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->link;
	}
	printf("\n");
}
void reverse(struct node*p)
{
    struct node*temp,*prv,*next;
    temp=header;
    while(temp!=NULL)
    {
        prv=temp;
        next=temp->link;
        temp=temp->link;
        if(prv==header)
        {
            prv->link=NULL;
        }
        else
        {
            prv->link=header;
            header=prv;
        }
    }
    display();
}
