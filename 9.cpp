/*
You are given 2 integer numbers, X, Y. 
Find the minimum of them, if x < y, 
otherwise find the maximum.

*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
	int x,y,X,Y;
	cin>>x>>y>>X>>Y;
	if(x<y){
		if(X<Y) cout<<X;
		else cout<<Y;
	} 
	else {
		if(X>Y) cout<<X;
		else cout<<Y;
	}
	return 0;
}