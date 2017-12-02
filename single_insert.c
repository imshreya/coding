#include<stdio.h>
struct node
{
	struct node*p1;
	int a;
	struct node*p2;
};
struct node*header;
void display();
void insert_f();
void insert_l();
void insert_val(int);
void main()
{
	struct node*temp,*ptr;
	int n,a,val;
	temp=malloc(sizeof(struct node));
	printf("enter the no.");
	scanf("%d",&a);
	temp->a=a;
	temp->p1=NULL;
	temp->p2=NULL;
	header=temp;
	n=1;
	while(n==1)
	{
		ptr=malloc(sizeof(struct node));
		printf("enter the no.");
	    scanf("%d",&a);
	    ptr->a=a;
	    ptr->p2=NULL;
	    ptr->p1=ptr;
	    temp->p2=ptr;
	    temp=ptr;
	    printf("again create one node");
	    scanf("%d",&n);
	}
	display();
	insert_f();
	insert_l();
	printf("enter the no. after which you want to insert your desire no.");
	scanf("%d",&val);
	insert_val(val);
}
void display()
{
	struct node*temp;
	temp=header;
	while(temp->p2!=NULL)
    {
    	printf("->%d",temp->a);
    	temp=temp->p2;
	}
	printf("->%d",temp->a);
	printf("\n");
}
void insert_f()
{
	struct node*temp,*ptr;
	int a;
	ptr=header;
	temp=malloc(sizeof(struct node));
	printf("enter the no. that you want to insert at first");
	scanf("%d",&a);
	temp->a=a;
	temp->p2=header;
	ptr->p1=temp;
	header=temp;
	ptr->p1=NULL;
	display();
}
void insert_l()
{
	struct node*temp,*ptr;
	int a;
	temp=header;
	while(temp->p2!=NULL)
	{
		temp=temp->p2;
	}
	ptr=malloc(sizeof(struct node));
	printf("enter the value that you want to insert at last");
	scanf("%d",&a);
	ptr->a=a;
	ptr->p2=NULL;
	temp->p2=ptr;
	ptr->p1=temp;
	display();
}
void insert_val(int val)
{
	struct node*temp,*ptr;
	int a;
	temp=header;
	while(temp->a!=val)
	{
		temp=temp->p2;
	}
	ptr=malloc(sizeof(struct node));
	printf("enter the that you wanna insert");
	scanf("%d",&a);
	ptr->a=a;
	ptr->p2=temp->p2;
	ptr->p1=temp;
	temp->p2=ptr;
	display();
}
