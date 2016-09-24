/*
You are given 3 integer numbers. 
Square and print those numbers, which nonnegative.
*/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"x="; cin>>x;
	cout<<"y="; cin>>y;
	cout<<"z="; cin>>z;
	if (x>=0 && y>=0 && z>=0){
		cout<<"x="<<pow(x,2)<<" "<<"y="<<pow(y,2)<<" "<<"z="<<pow(z,2);
} else { cout<<"Nothing";
}
	return 0;
}
