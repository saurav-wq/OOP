#include<iostream>
#define pi 3.14
using namespace std;
int main() {
    int r;
	float A, C;
	cout<<"Enter the radius= "<<endl;
	cin>>r;
	A = pi*r*r;
	C = 2*pi*r;
	cout<<"Area = "<<A<<endl<<"Circumference = "<<C<<endl;
	return 0;	
}
