#include<iostream>
using namespace std;
class maths
{
    int a,b,c;
public:
    void getdata()
    {
        cout<<"enter two numbers";
        cin>>a>>b;
        cout<<a<<"\t"<<b;
    }
    void addition()
    {
        cout<<"addition is:";
        cout<<a+b<<endl;
    }
    void substraction()
    {
        cout<<"substraction is:";
        cout<<a-b<<endl;
    }
    void multipliction()
    {
        cout<<"multiplication is:";
        cout<<a*b<<endl;
    }
    void division()
    {
        cout<<"division is:";
        cout<<a/b<<endl;
    }
};
int main()
{
    maths m;
    m.getdata();
    m.division();
    m.multipliction();
    m.addition();
    m.substraction();
    return 0;
}
