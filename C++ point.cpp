#include<iostream>
using namespace std;
class point{
	public:
	double x,y;
	public:
	double getx(){return x;}
	void setx (double v){x=v;}
	double r(){return y;}
	void s(double t){y=t;}
};
point operator+ (point& p1,point& p2){
	point sum=(p1.x+p2.x);
	return sum;
}
ostream& operater<< (ostream& out,const point& p)
{
	out<<"("<<p.x<<","<<")";
	return out;
}
int main()
{
	point a={3.5,2.5},b={2.5,4.5},c;
	cout<<"a="<<a<<"b="<<end1;
	return 0;
}
