#include<iostream>
using namespace std;
int main() {
	double x=1.2;
	int sum = (int)x+1;
	
	float f=3.5;
	int b = static_cast<int>(f);
	
	cout<<"Sum = "<<sum<<endl;
	cout<<b;
	 
	return 0;
}
