#include<iostream>
using namespace std;
void marge(int *a,int *b ,int num);
int main()
{
    int a[5],b[5];
    cout<<"enter the first & secong array that you want to mearge sort "<<"\n";
    cout<<"first array";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"second array";
    for(int j=0;j<5;j++)
    {
        cin>>b[j];
    }
    marge(a,b,5);
    return 0;
}
void marge(int*a,int*b,int num)
{
    int nm,d=0,e=0;
    int arr[10];
    nm=0;
    int first=*a;
    int second=*b;
    while(nm<10)
    {
        if(first<second)
        {
            if(d<5)
            {
            arr[nm]=first;
            d++;
            a++;
            first=*a;
            nm++;
            }
            if(d==5)
            {
                for(int j=nm;j<10;j++)
                {
                arr[j]=second;
                b++;
                second=*b;
                nm++;
                }
            }
        }
        else
        {
            if(e<5)
            {
            arr[nm]=second;
            b++;
            e++;
            second=*b;
            nm++;
            }
            if(e==5)
            {
                for(int r=nm;r<10;r++)
                {
                arr[r]=first;
                a++;
                first=*a;
                nm++;
                }
            }
        }

    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
