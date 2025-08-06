#include<iostream>
using namespace std;
int main() {
	float F, C;
	cout<<"Enter a temperature in Fahrenheit: ";
	cin>>F;
	
	C = (F-32)/1.8;
	cout<<"The temperature in Celsius is "<<C<<endl;
	return 0;
	
}
