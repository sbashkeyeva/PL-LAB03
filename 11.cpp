/*
You are given 4 integer numbers A, B, C, D. 
Replace them with the maximum of them if 
A >= B >= C >= D, if A > B > C > D, do nothing,
otherwise replace the numbers by their squares.
*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"a="; cin>>a;
	cout<<"b="; cin>>b;
	cout<<"c="; cin>>c;
	cout<<"d="; cin>>d;
	if ((a>=b) && (b>=c) && (c>=d)){
		a=abs(a); b=abs(b); c=abs(c); d=abs(d);
		cout<<a<<" "<<b<<" "<<c<<" "<<d;
	} else{
		a=a*a; b=b*b; c=c*c; d=d*d;
		cout<<a<<" "<<b<<" "<<c<<" "<<d;
	}
	return 0;
}