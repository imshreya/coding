#include<stdio.h>
struct node
{
	struct node*link;
	int data;
};
struct node*header;
void display();
void serach(int);
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
    printf("enter the no. that you wanna to search in the list:");
    scanf("%d",&val);
    serach(val);
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
void serach(int val)
{
    struct node*temp;
    int t,count=0;
    temp=header;
    while(temp->data!=val)
    {
        ++count;
        temp=temp->link;
    }
    //t=temp->a;
    printf("the element is at %dth position in the link list",count+1);
}
