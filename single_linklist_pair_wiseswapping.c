#include<stdio.h>
struct node
{
    int data;
    struct node*link;
};
struct node *header;
void display();
void pair_swap();
void main()
{
	struct node*temp,*ptr;
	int data,n,val,val1,val2;
	temp=malloc(sizeof(struct node));
	printf("enter the number:");
	scanf("%d",&data);
	temp->data=data;
	temp->link=NULL;
	header=temp;
	n=1;
	while(n==1)
	{
		ptr=malloc(sizeof(struct node));
		printf("enter the no. again:");
		scanf("%d",&data);
		ptr->data=data;
		ptr->link=NULL;
		temp->link=ptr;
		temp=ptr;
		printf("if again want to create node press 1:");
		scanf("%d",&n);
    }
    display();
    pair_swap();
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
void pair_swap()
{
    struct node*temp,*next,*ptr;
    temp=header;
    header=header->link;
    while(temp->link!=NULL)
    {
            next=temp->link;
            if(next->link==NULL)
            {
               temp->link=NULL;
               next->link=temp;
            }
            else
            {
                ptr=next->link;
                if(ptr->link==NULL)
                {
                    temp->link=ptr;
                    next->link=temp;
                    temp=ptr;
                }
                else
                {
                temp->link=ptr->link;
                 next->link=temp;
                  temp=ptr;
                }
            }

    }
    display();
}
