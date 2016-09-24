/*
You are given 2 integer numbers. 
Replace first number with 0, if first number less or 
equal than second number, otherwise do nothing.

*/
#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	int a,b;
	cin>>a>>b;
	if (a<=b){ 
		cout<<0;
	} else {
		cout<<"nothing";
	}
	return 0;
}