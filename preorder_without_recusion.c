#include<stdio.h>
struct tree
{
    struct tree*l;
    int a;
    struct tree*r;
};
struct tree*stack[31];
int top=-1;
struct tree*create(struct tree*,int);
void inorder(struct tree*);
void preorder(struct tree*);
void postorder(struct tree*);
void push(struct tree*);
struct tree* pop();
struct tree*root;
void main()
{
    int n,num,i;
    printf("enter the no. of values insert in the binary search tree\n");
    scanf("%d",&n);
    printf("enter the values that you wnat to insert in binary search tree\n");
    for(i=1;i<=n;i++)
    {
        printf("enter the %d value :",i);
        scanf("%d",&num);
        root=create(root,num);
    }
    printf("inorder:\n");
    //inorder(root);
    //printf("\npreorder:\n");
    preorder(root);
    printf("\npostorder:\n");
    postorder(root);
}
struct tree*create(struct tree*p,int t)
{
    if(p==NULL)
    {
        p=(struct tree*)malloc(sizeof(struct tree));
        p->l=p->r=NULL;
        p->a=t;
        return p;
    }
    else
    {
        if(t<p->a)
        {
            p->l=create(p->l,t);
        }
        else
        {
            p->r=create(p->r,t);
        }
        return p;
    }
}
void preorder(struct tree*p)
{
    struct tree*temp;
    if(p==NULL)
    {
        return;
    }
    push(p);
    while(top!=-1)
    {
        temp=pop();
        printf("%d\t",temp->a);
        if(temp->r!=NULL)
        {
            push(temp->r);
        }
        if(temp->l!=NULL)
        {
            push(temp->l);
        }
    }
}
void inorder(struct tree*p)
{
    struct tree*temp;
    if(p==NULL)
    {
        return ;
    }
    while(1)
    {
        while(p->a!=NULL)
        {
            push(p);
            p=p->l;
        }
        while(p->r==NULL)
        {
            printf("%d\t",p->a);
            if(top!=-1)
            {
                p=pop();
            }
            else
            {
                return;
            }
        }
            printf("%d\t",p->a);
            p=p->r;
        }
}
void postorder(struct tree*p)
{
    struct tree*temp;
    if(p==NULL)
    {
        return;
    }
    push(p);
    while(top!=-1)
    {
        temp=pop();
        if(temp->r!=NULL)
        {
            push(temp->r);
        }
        if(temp->l!=NULL)
        {
            push(temp->l);
        }
        printf("%d\t",temp->a);
    }
}
void push(struct tree*a)
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
struct tree* pop()
{
    struct tree* t;
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
