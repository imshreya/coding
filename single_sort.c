#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header;
void display();
void sort();
void main()
{
	struct node*ptr,*temp;
	int data,n;
	temp=malloc(sizeof(struct node));
	printf("enter the no.");
	scanf("%d",&data);
	temp->data=data;
	temp->link=NULL;
	header=temp;
	n=1;
	while(n==1)
	{
		ptr=malloc(sizeof(struct node));
		printf("enter again");
		scanf("%d",&data);
		ptr->data=data;
		ptr->link=NULL;
		temp->link=ptr;
		temp=ptr;
		printf("if you wanna add new add press 1");
		scanf("%d",&n);
	}
	display();
	sort();
}
void display()
{
	struct node*temp;
	temp=header;
	while(temp->link!=NULL)
	{
		printf("->%d",temp->data);
		temp=temp->link;
	}
	printf("->%d",temp->data);
	printf("\n");
}
void sort()
{
	struct node*temp,*ptr;
	int t;
	temp=header;
	while(temp->link!=NULL)
	{
		ptr=temp->link;
		while(ptr!=NULL)
		{
	    	if(ptr->data<temp->data)
		    {
			    t=ptr->data;
		    	ptr->data=temp->data;
			    temp->data=t;
		    }
		    else
		        ptr=ptr->link;
	    }
	    	temp=temp->link;
	}
	display();
}
