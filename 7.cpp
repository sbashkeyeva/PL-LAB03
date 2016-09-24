/*
You are given 2 integer numbers(x, y; x != y). 
Replace and print fewer of them with (x+y) / 2 and 
greater of them with 2 * x * y;

*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int x,y;
	cout<<"X="; cin>>x;
	cout<<"Y="; cin>>y;
    if (x>y)
    {
    	x=2*x*y;
    	y=(x+y)/2;
    	cout<<x<<" "<<y;
    }
    if (x<y)
    {
    	y=2*x*y;
    	x=(x+y)/2;
    	cout<<x<<" "<<y;
    }
	return 0;
}