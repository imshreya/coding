#include<stdio.h>
struct node
{
	int data;
	struct node*link;
};
struct node*header,*header1,*header2;
void display();
void even_odd();
void sort(struct node*);
void main()
{
   struct node *temp,*ptr,*cpt;
   int data,n,val;
   temp=malloc(sizeof(struct node));
   printf("enter the value:");
   scanf("%d",&data);
   temp->data=data;
   temp->link=NULL;
   header=temp;
   n=1;
   while(n==1)
   {
   	ptr=malloc(sizeof(struct  node));
   	printf("enter the value again :");
   	scanf("%d",&data);
   	ptr->data=data;
   	ptr->link=NULL;
   	temp->link=ptr;
   	temp=ptr;
   	printf("if you want to create again press 1:");
   	scanf("%d",&n);
   }
   display(header);
   even_odd();
   display();
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
void even_odd()
{
 struct node*temp,*ptr,*cpt,*run;
 int n;
 temp=header;
 while(temp!=NULL)
 {
     ptr=malloc(sizeof(struct node));
     ptr->data=temp->data;
     ptr->link=NULL;
     if(ptr->data%2==0)
     {
         if(header1==NULL)
         {
             header1=ptr;
         }
         else
         {
             cpt=header1;
             while(cpt->link!=NULL)
             {
                 cpt=cpt->link;
             }
             cpt->link=ptr;
         }
     }
    else
     {
         if(header2==NULL)
         {
             header2=ptr;
         }
         else
         {
             cpt=header2;
             while(cpt->link!=NULL)
             {
                 cpt=cpt->link;
             }
             cpt->link=ptr;
         }
     }
     temp=temp->link;
 }
 sort(header1);
 sort(header2);
 printf("if you want to list diaplay as even-odd press 1 :\n");
 printf("if you want to list display as odd-even 2 :\n");
 scanf("%d",&n);
 if(n==1)
 {
  header=header1;
  run=header1;
  while(run->link!=NULL)
  {
      run=run->link;
  }
  run->link=header2;
 }
 if(n==2)
 {
     header=header2;
  run=header2;
  while(run->link!=NULL)
  {
      run=run->link;
  }
  run->link=header1;
 }
}
void sort(struct node*p)
{
	struct node*temp,*ptr;
	int t;
	temp=p;
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
}
