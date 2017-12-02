#include<iostream>
using namespace std;
inline T swap(int&x,int&y){ 
int temp=x;
x=y;
y=temp;
}
inline void swap(double&a,double&b){
	double temp=a;
	a=b;
	b=temp;
}
int main()
{
	int x=20,y=10;
	double a=4.5,b=5.6;
	cout<<"inputs:"<<x<<","<<y<<endl;
	swap(x,y);
	cout<<"outputs"<<x<<","<<y<<endl;
	cout<<"double inputs"<<a<<","<<b<<endl;
	swap(a,b);
	cout<<"double outputs"<<a<<","<<b<<endl;
	return 0;
}
