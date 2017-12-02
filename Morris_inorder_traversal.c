#include<stdio.h>
struct tree
{
    struct tree*l;
    int a;
    struct tree*r;
};
void create(struct tree*,int);
struct tree*root;
void morris(struct tree*);
void inorder(struct tree*);
void main()
{
    int n,i,no;
    printf("enter the no. of values that you want to insert:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the no. :");
        scanf("%d",&no);
        create(root,no);
    }
    printf("\n inorder traversal :\n");
    inorder(root);
    printf("\nmorris traversal is :\n");
    morris(root);
}
void create(struct tree*p,int t)
{
    struct tree*parent,*temp;
    temp=malloc(sizeof(struct tree));
    temp->r=temp->l=NULL;
    temp->a=t;
    if(p==NULL)
    {
        root=temp;
        return;
    }
    else
    {
        while(p!=NULL)
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
