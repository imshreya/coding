#include<stdio.h>
int stack[20];
int top;
void push(int);
int pop();
void show();
void main()
{
    int i,t;
    for(i=0;i<10;i++)
    {
        scanf("%d",&stack[i]);
    }
    top=i-1;
    push(11);
    push(12);
    push(13);
    push(14);
    push(15);
    show();
    t=pop();
    printf("\nthe poped of element is: %d",t);
    t=pop();
    printf("\nthe poped of element is: %d",t);
    t=pop();
    printf("\nthe poped of element is: %d\n",t);
    show();
}
void push(int a)
{
    if(top==19)
    {
        printf("stack full\n");
        return;
    }
    else
    {
        top=top+1;
        stack[top]=a;
    }
}
int pop()
{
    int t;
   if(top==-1)
   {
    printf("there is no stack is exits\n");
    return;
   }
   else
   {
       t=stack[top];
       stack[top]=0;
       top=top-1;
   }
   return t;
}
void show()
{
    int i;
    printf("stack elements are:\n");
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}
