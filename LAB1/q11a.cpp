#include<iostream>
using namespace std;
void add(int a, int b) {
	cout<<"Sum= "<<(a+b);
}
void add(double a, double b) {
	cout<<endl<<"Sum= "<<(a+b);
}
int main() {
	add(10,2);
	add(3.4,6.3);
	
	return 0;
}
