#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x;
	cin>>y;
	cin>>z;
	if (x<=y && x<=z){
		cout<<"X is min"<<"="<<x<<endl;
	} else if (y<=x && y<=z){
		cout<<"Y is min"<<"="<<y<<endl;
	} else if (z<=x && z<=y){
		cout<<"Z is min"<<"="<<z<<endl;
	}
	return 0;
}