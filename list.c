#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
struct node *header;
void display();
void insert_f();
void insert_l();
void insert_vala(int);
void insert_valb(int);
void delete_f();
void delete_l();
void delete_val(int);
void main()
{
	struct node*temp,*ptr;
	int data,n,val,val1,val2;
	temp=malloc(sizeof(struct node));
	printf("enter the number\n");
	scanf("%d",&data);
	temp->data=data;
	temp->link=NULL;
	header=temp;
	n=1;
	while(n==1)
	{
		ptr=malloc(sizeof(struct node));
		printf("enter the no. again\n");
		scanf("%d",&data);
		ptr->data=data;
		ptr->link=NULL;
		temp->link=ptr;
		temp=ptr;
		printf("if again want to create node press 1\n");
		scanf("%d",&n);
    }
    display();
    //insert_f();
    //insert_l();
    //printf("enter the no. after which you want to insert the value\n");
    //scanf("%d",&val);
    //insert_vala(val);
    //printf("enter the no. before which you want to insert\n");
    //scanf("%d",&val1);
    //insert_valb(val1);
    delete_f();
    delete_l();
    printf("enter the value that you want to delete\n");
    scanf("%d",&val2);
    delete_val(val2);
}
void display()
{
	struct node*temp,*ptr;
	temp=header;
	while(temp->link!=NULL)
	{ 
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	printf("%d\t",temp->data);
	printf("\n");
}
void insert_f()
{
	struct node*temp;
	int i;
	temp=malloc(sizeof(struct node));
	printf("enter the no. that you want to insert at the top of the list\n");
	scanf("%d",&i);
	temp->data=i;
	temp->link=header;
	header=temp;
	display();
}
void insert_l()
{
	struct node*temp,*ptr;
	int i;
	temp=header;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	ptr=malloc(sizeof(struct node));
	printf("enter the no the you want to insert at the end of the link list\n");
	scanf("%d",&i);
	ptr->data=i;
	ptr->link=NULL;
	temp->link=ptr;
	display();
}
void insert_vala(int val)
{
	struct node*temp,*ptr;
	int n;
	temp=header;
	while(temp->data!=val)
	{
		temp=temp->link;
	}
	ptr=malloc(sizeof(struct node));
	printf("enter the valau that you want to enter\n");
	scanf("%d",&n);
	ptr->data=n;
	ptr->link=temp->link;
	temp->link=ptr;
	display();
}
void insert_valb(int val)
{
	struct node*temp,*prv,*ptr;
	int i;
	temp=header;
	while(temp->data!=val)
	{
		prv=temp;
		temp=temp->link;
	}
	ptr=malloc(sizeof(struct node*));
	printf("enter the value the you want to insert\n");
	scanf("%d",&i);
	ptr->data=i;
	ptr->link=prv->link;
	prv->link=ptr;
	display();
}
void delete_f()
{
	header=header->link;
	display();
}
void delete_l()
{
	struct node *temp,*prv;
	temp=header;
	while(temp->link!=NULL)
	{
		prv=temp;
		temp=temp->link;
	}
	prv->link=NULL;
	display();
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
