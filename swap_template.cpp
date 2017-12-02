#include<iostream>
#include<complex>
using namespace std;
template<class T>
void swap(T &d,T  &s)
{
	T temp=d;
	d=s;
	s=temp;
}
int main()
{
	int m=5,n=5;
	double x=5.3,y=10.6;
	complex<double>r(2.4,3.5),s(3.4,6.7);
	cout<<"inputs:"<<m<<","<<n<<endl;
    swap(m,n);
	cout<<"outputs:"<<m<<","<<n<<endl;
	cout<<"double inputs:"<<x<<","<<y<<endl;
	swap(double x,double y);
	cout<<"double outputs:"<<x<<","<<y<<endl;
	cout<<"complex inputs"<<r<<","<<s<<endl;
	swap(double r,double s);
	cout<<"double outputs:"<<r<<","<<s<<endl;
	return 0;
} 
