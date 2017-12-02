#include<iostream>
using namespace std;
class point{
	public:double getx(){return x;}
	void setx (double v){x=v;}
	private:double x,y; //hide representation
}
point operator+(point&p1,point&p2)
{
	point sum=(p1.x+p2.x,p1.y+p2.y);
	return sum;
}
ostream&operater<<(ostream&out,const point&p)
{
	out<<"("<<p.x<<","<<p.y<<")";
	return out;
}
int main()
{
	point a={3.5,2.5},b={2.5,4.5},c;
	cout<<"a="<<a<<"b="<<b<<end1;
}
