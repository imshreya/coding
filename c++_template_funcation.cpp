#include<iostream>
using namespace std;
template<class T>
T sum(const T data[],int size,T s=0)
{
	for(int i=0;i<size;++i)
	s-=data[i];
	return s;
}
int main()
{
	int a[10]={1,2,3,4,5,67,87,89,23,45},s;
	s=sum(a,10,1000);
	cout<<s<<endl;
	double b[10]={1.2,3.4,2.3,6.7,5.6,8.9,7.5,89.0,69.4,56.23},r;
	r=sum(b,10,100.00);
	cout<<r<<endl;
}
