#include<stdio.h>
int stack[20];
int top=-1;
void push(int);
char pop();
void main()
{
    char prefix[20],postfix[20],g,o;
    int i,j,n,y=0,a[2]={61,0},b[2]={43,1},c[2]={45,1},d[2]={42,2},e[2]={47,2},f[2]={37,2},t,p,l,k;
    printf("enter the prefix expersion which you want to covert into postfix form:");
    gets(prefix);
    i=0;
    n=prefix[i];
    printf("The expression that you enter is:");
    while(n!='\0')
    {

        printf("%c",n);
        n=prefix[++i];
    }
    printf("\n");
    l=strlen(prefix);
    printf("length=%d\n",l);
    for(i=0;i<l;i++)
    {
        t=prefix[i];
        printf("%d\n",t);
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
      if(prefix[i]==97&&122)
      {
          postfix[y]=prefix[i];
          y++;
      }
      else
      {
          if(top==-1)
          {
              push(prefix[i]);

          }
          else
          {
                  p=stack[top];
                  if(p==a[0])
                  {
                      p=a[1];
                  }
                  if(p==b[0])
                  {
                      p=b[1];
                  }
                  if(p==c[0])
                  {
                      p=c[1];
                  }
                  if(p==d[0])
                  {
                      p=d[1];
                  }
                  if(p==e[0])
                  {
                      p=e[1];
                  }
                  if(p==f[0])
                  {
                      p=f[1];
                  }
              if(p<t)
              {
                  push(prefix[i]);

              }
              else
              {
                  for(j=top;j>=0;j--)
                  {
                       p=stack[top];
                  if(p==a[0])
                  {
                      p=a[1];
                  }
                  if(p==b[0])
                  {
                      p=b[1];
                  }
                  if(p==c[0])
                  {
                      p=c[1];
                  }
                  if(p==d[0])
                  {
                      p=d[1];
                  }
                  if(p==e[0])
                  {
                      p=e[1];
                  }
                  if(p==f[0])
                  {
                      p=f[1];
                  }
                   if(p>=t)
                  {
                      g=pop();
                      printf("g=%c\n",g);
                      postfix[y]=g;
                      y++;
                      continue;
                  }
                  }
                  push(prefix[i]);
                  printf("%c",prefix[i]);
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
    printf("\npostfix is");
    for(i=0;i<=l;i++)
    {
        printf("%c",postfix[i]);
    }
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
