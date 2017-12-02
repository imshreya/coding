#include<stdio.h>
struct tree
{
    struct tree*l;
    int a;
    struct tree*r;
};
struct tree*create(struct tree*,int);
void inorder(struct tree*);
void preorder(struct tree*);
void postorder(struct tree*);
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
    inorder(root);
    printf("\npreorder:\n");
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
void preorder(struct tree*root)
{
   if(root==NULL)
   {
    return;
    }
    else
    {
        printf("%d\t",root->a);
        preorder(root->l);
        preorder(root->r);
    }
}
void postorder(struct tree*root)
{
   if(root==NULL)
   {
    return;
    }
    else
    {
        postorder(root->l);
        postorder(root->r);
        printf("%d\t",root->a);
    }
}
