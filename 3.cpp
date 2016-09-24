#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if (x>=y>=z){
		cout<<x*2<<" "<<y*2<<" "<<z*2;
	} else {
		cout<<abs(x)<<" "<<abs(y)<<" "<<abs(z);
	}
	return 0;
}