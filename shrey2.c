#include<stdio.h>
struct tree
{
    struct tree*lc;
    int a;
    struct tree*rc;
};
struct tree*root;
void create(struct tree*,int);
void inorder(struct tree*);
void main()
{
    int a[20],i,n,t;
    printf("enter the no. of values in the BST:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
       if(i==0)
       {
           root->a=t;
           root->rc=root->lc=NULL;
       }
       else
       {
           create(root,t);
       }

    }
 inorder(root);
}
void create(struct tree*p,int t)
{
    struct tree*temp,*parent;
    temp=(struct tree*)malloc(sizeof(struct tree));
    temp->a=t;
    temp->lc=temp->rc=NULL;
    parent=NULL;
    //printf("temp->a=%d",temp->a);
    while(p!=NULL)
    {
      //  printf("p->a=%d",p->a);
        parent=p;
        if(parent->a>t)
        {
            p=p->lc;
        }
        else
        {
            p=p->rc;
        }
    }
    //if(parent==NULL)
    //{
      //  p=temp;
    //}
     //printf("root->a=%d",root->a);
    if(parent->a>t)
    {
        parent->lc=temp;
    }
    else
    {
        parent->rc=temp;
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
        inorder(root->lc);
        printf("%d\t",root->a);
        inorder(root->rc);
    }
}
