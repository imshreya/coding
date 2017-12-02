#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header;
void display();
void insert_f(int);
void insert (int,int);
void delete_fval ();
void delete_lval();
void delete_aval();
void main()
{
   struct node *temp,*ptr;
   int data,n,v1,v2,r,i;
   temp=malloc(sizeof(struct node));
   printf("enter the value:");
   scanf("%d",&data);
   temp->data=data;
   temp->link=NULL;
   header=temp;
   n=1;
   while(n==1)
   {
   	ptr=malloc(sizeof (struct  node));
   	printf("enter the value again :");
   	scanf("%d",&data);
   	ptr->data=data;
   	ptr->link=NULL;
   	temp->link=ptr;
   	temp=ptr;
   	printf("if you want to create again press 1:");
   	scanf("%d",&n);
   }
   display();
   printf("\nenter the number that you wanna to enter\n");
   scanf("%d",&i);
   insert_f(i);
   //display ();
   printf("\nenter the number that you want to insert\n");
   scanf("%d",&v1);
   printf("enter the number after which you wnat to insert number\n");
   scanf("%d",&v2);
   insert(v1,v2);
   display();
   printf("\n");
   delete_fval();
   display();
   printf("\n");
   delete_lval();
   display();
   printf("\n enter the value that you wanna to delete\n");
   scanf("%d",&r);
   delete_aval(r);
   display();
   printf("\n");
}
void display()
{
	struct node*temp;
	temp=header;
	while(temp->link!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->link;
	}
	printf("%d\t",temp->data);
}
void insert_f(int a)
{
	struct node*temp;
	temp=header;
	temp->data=a;
	temp->link=header;
	header=temp;
	display();
}
void insert (int a,int b)
{
	struct node *temp,*ptr;
	temp=header;
	ptr=malloc(sizeof(struct node));
	while(temp->data!=b)
	{
		temp=temp->link;
	}
	ptr->data=a;
	ptr->link=temp->link;
	temp->link=ptr;
}
void delete_fval()
{
	int p;
	if(header==NULL)
	{
		printf("\nlist underflow\n");
		return ;
	}
	p=header->data;
	printf("deleted elemnent is %d\n",p);
	header=header->link;
}
void delete_lval()
{
	struct node*temp,*prv;
	int l;
	temp=header;
	if(header==NULL)
	{
		printf("list under flow\n");
		return;
	}
	while(temp->link==NULL)
	{
		prv=temp;
		temp=temp->link;
	}
		l=temp->data;
	prv->link=NULL;
	printf("the deleted element is %d\n",l);
}
void delete_aval(int a)
{
	struct node *temp,*prv;
	temp=header;
	while(temp->data!=a)
	{
		prv=temp;
		temp=temp->link;
	}
	prv->link=temp->link;
//	temp->link=(struct node*)malloc(sizeof(struct node));
//	temp->link=temp;
free(temp);
}
