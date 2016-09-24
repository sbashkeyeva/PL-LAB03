/*
Given the point coordinates, X, Y, 
and the radius of circle, R with center at (0, 0). 
Determine the weather, is the point inside of circle or not. 
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double X,Y,R;
	cin>>X>>Y>>R;
	if(X*X + Y*Y<=R){ 
		cout<<"INSIDE";
	}
	else {
		cout<<"OUTSIDE";
	} 
	return 0;
}