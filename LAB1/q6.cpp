#include<iostream>
#include "add.cpp"
using namespace std;
int main() {
	int x, y;
	int result;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	
	result = add(x, y);
	cout<<"Sum = "<<result<<endl;
	return 0;
}
