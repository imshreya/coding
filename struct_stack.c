#include<stdio.h>
struct stack
{
    int a[20];
    int top;
};
void push(struct stack*,int);
void init(struct stack*);
void display(struct stack*);
int pop(struct stack*);
void main()
{
    struct stack b,c,d,e;
    int i,t;
    b.top=-1;
    c.top=-1;
    d.top=-1;
    init(&b);
    init(&c);
    init(&d);
   /* printf("insert the value for stack b is:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&b.a[i]);
    }
    b.top=i-1;
    printf("insert the value for stack c is:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&c.a[i]);
    }
    c.top=i-1;
    printf("insert the value for stack d is:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&d.a[i]);
    }
    d.top=i-1;*/
    push(&b,32);
    push(&b,45);
    push(&c,32);
    push(&c,45);
    push(&d,32);
    push(&d,45);
    printf("your output for stack b is:");
    display(&b);
    printf("your output for stack c is:");
    display(&c);
    printf("your output for stack d is:");
    display(&d);
    t=pop(&b);
    printf("\nthe element that is removed from stack b is:%d",t);
    t=pop(&c);
    printf("\nthe element that is removed from stack c is:%d",t);
    t=pop(&d);
    printf("\nthe element that is removed from stack d is:%d\n",t);
    printf("your output for stack b is:");
    display(&b);
    printf("your output for stack c is:");
    display(&c);
    printf("your output for stack d is:");
    display(&d);
}
void push(struct stack*p,int a)
{
    if(p->top==19)
    {
        printf("\n stack is full");
        return;
    }
    else
    {
        p->top++;
        p->a[p->top]=a;
    }
}
void init(struct stack*p)
{
    int i;
    for(i=0;i<20;i++)
    {
        p->a[i]=0;
    }
}
void display(struct stack*p)
{
    int i;
    for(i=p->top;i>=0;i--)
    {
        printf("%d\t",p->a[i]);
    }
    printf("\n");
}
int pop(struct stack*p)
{
    int t;
    if(p->top==-1)
    {
        printf("there is no stack");
        return;
    }
    else
    {
        t=p->a[p->top];
        p->a[p->top]=0;
        p->top--;
        return t;
    }
}
