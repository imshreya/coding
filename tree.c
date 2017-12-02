#include<stdio.h>
struct tree
{
    struct tree*left;
    int a;
    struct tree*right;
};
int stack[50];
int top=-1;
struct tree*root;
struct tree* create(int);//this create funcation simply make a node of a tree and return the address of this newly created node
void inorder(struct tree*);
void preorder(struct tree*);
void postorder(struct tree*);
void main()
{
    root=create(5);
    root->left=create(7);
    root->right=create(3);
    (root->left)->left=create(12);
    (root->left)->right=create(15);
    (root->right)->right=create(2);
    printf("the inorder is:\n");
    inorder(root);
    printf("\nthe preorder is:\n");
    preorder(root);
    printf("\nthe postorder is:\n");
    postorder(root);
}
struct tree* create(int t)
{
    struct tree*temp;
    temp=malloc(sizeof(struct tree));
    temp->a=t;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void inorder(struct tree*root)
{
   if(root==NULL)
   {
    return;
    }
    else
    {
        inorder(root->left);
        printf("%d\t",root->a);
        inorder(root->right);
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
        preorder(root->left);
        preorder(root->right);
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
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->a);
    }
}
void preorder(struct tree*root)
{
    struct tree*temp,*ptr;
    temp=root;
    while(temp!=NULL)
    {
        if(temp->a==root->a)
        {
            push(temp->a);
            temp=temp->left;
            continue;
        }
        else
        {
        push(temp->a);
        temp=temp->left;
        if(temp->left==NULL)
        {
            if(root->lett->lett!=NULL)
            {
               push(root->left->left->a);

            }
            else
            {
                break;
            }
        }
        }
    }
}
