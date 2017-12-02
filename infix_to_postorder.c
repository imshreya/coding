#include<stdio.h>
int stack[20];
int top=-1;
void push(int);
char pop();
void main()
{
    char infix[20],postfix[20],g,o;
    int i,j,n,y=0,t,p,l,k;
    printf("enter the infix expersion which you want to covert into postfix form:");
    gets(infix);
    i=0;
    n=infix[i];
    while(n!='\0')
    {
        n=infix[++i];
    }
    l=strlen(infix);
    for(i=0;i<l;i++)
    {
        t=infix[i];
        t=presidence(t);
         if(infix[i]==97&&122)
      {
          postfix[y]=infix[i];
          y++;
      }
      else
      {
          if(top==-1)
          {
              push(infix[i]);

          }
          else
          {
                  p=stack[top];
                  p=presidence(p);
                  if(p<t)
              {
                  push(infix[i]);

              }
              else
              {
                  for(j=top;j>=0;j--)
                  {
                       p=stack[top];
                       p=presidence(p);
                       if(p>=t)
                  {
                      g=pop();
                      postfix[y]=g;
                      y++;
                      continue;
                  }
                  }
                   push(infix[i]);
              }
          }
      }
    }
    for(k=top;k>=0;k--)
    {
        g=pop();
        postfix[y]=g;
        y++;
    }
    printf("postfix is\n");
    for(i=0;i<=l;i++)
    {
        printf("%c",postfix[i]);
    }
}
int presidence(int t)
{
    int a[2]={61,0},b[2]={43,1},c[2]={45,1},d[2]={42,2},e[2]={47,2},f[2]={37,2};
    if(t==a[0])
                  {
                      t=a[1];
                  }
                  if(t==b[0])
                  {
                      t=b[1];
                  }
                  if(t==c[0])
                  {
                      t=c[1];
                  }
                  if(t==d[0])
                  {
                      t=d[1];
                  }
                  if(t==e[0])
                  {
                      t=e[1];
                  }
                  if(t==f[0])
                  {
                      t=f[1];
                  }
                  return t;
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
char pop()
{
    char t;
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
