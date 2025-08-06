#include<iostream>
using namespace std;
void swap(float &x, float &y) {
	float temp;
	temp = x;
	x = y;
	y = temp;
}
int main() {
	float x, y;
	cout<<"Enter two float values: ";
	cin>>x>>y;
	
	cout<<endl<<"Before swapping: "<<endl<<"x= "<<x<<" y= "<<y<<endl;
	
	swap(x, y);
	
	cout<<"After swapping: "<<endl<<"x= "<<x<<" y= "<<y;
	
	return 0;
}



