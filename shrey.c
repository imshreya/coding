#include<stdio.h>
struct tree
{
    struct tree*lc;
    int a;
    struct tree*rc;
};
struct tree*root;
void create(int);
void inorder(struct tree*);
void main()
{
 create(22);
  //printf("root->a=%d",root->a);
 create(5);
  //printf("root->a=%d",root->a);
 create(17);
 create(20);
 create(3);
 create(28);
 create(37);
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
    while(root!=NULL)
    {
      //  printf("p->a=%d",p->a);
        parent=root;
        if(parent->a>t)
        {
            p=p->lc;
        }
        else
        {
            p=p->rc;
        }
    }
    if(parent==NULL)
    {
        root=temp;
    }
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
