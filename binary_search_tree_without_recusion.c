#include<stdio.h>
struct tree
{
    struct tree*r;
    struct tree*l;
    int a;
};
void morris(struct tree*);
struct tree*root;
void create(struct tree*,int);
void inorder(struct tree*);
void main()
{
    int n,i,no;
    printf("enter the no. of node that you want to create :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nenter the number :");
        scanf("%d",&no);
        create(root,no);
    }
    printf("\ninorder traversal :\n");
    inorder(root);
    printf("\nmorris inorder traversal :\n");
    morris(root);
}
void create(struct tree*p,int t)
{
    struct tree*parent,*temp;
    temp=malloc(sizeof(struct tree));
    temp->r=temp->l=NULL;
    temp->a=t;
    if(p==0)
    {
        root=temp;
        return;
    }
    else
    {
        while(p!=0)
        {
            parent=p;
            if(t<p->a)
            {
                p=p->l;
            }
            else
            {
                p=p->r;
            }
        }
    }
    if(t<parent->a)
    {
        parent->l=temp;
    }
    else
    {
        parent->r=temp;
    }
}
void inorder(struct tree*root)
{
   if(root==NULL)
   {
    return;
    }
    else
    {
        inorder(root->l);
        printf("%d\t",root->a);
        inorder(root->r);
    }
}
void morris(struct tree*p)
{
    struct tree*temp;
    if(p==NULL)
    {
        return;
    }
    while(p!=NULL)
    {
        if(p->l==NULL)
        {
            printf("%d\t",p->a);
            p=p->r;
        }
        else
        {
            temp=p->l;
            while(temp->r!=NULL&&temp->r!=p)
            {
                temp=temp->r;
            }
            if(temp->r==NULL)
            {
                temp->r=p;
                p=p->l;
            }
            else
            {
                temp->r=NULL;
                printf("%d\t",p->a);
                p=p->r;
            }
        }
    }
}
