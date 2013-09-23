#include<iostream>
using namespace std;
float change(float f)
{
	return (f-32)*5/9;
}
long zuhe(int n,int m)
{
	long t=1;
	int i;
	for(i=m;i>m-n;i--)
		t=t*i/(m-i+1);
	return t;
}
double mi(double x,int y)
{
	if (y==0) return 1;
	if (y==1) return x;
	return x*mi(x,y-1);
}
void main()
{
}