#include<iostream>
using namespace std;
void sum(int a, int b) {
	cout<<"Sum= "<<(a+b);
}
void sum(int a, int b, int c) {
	cout<<endl<<"Sum= "<<(a+b+c);
}
int main() {
	sum(8,9);
	sum(8,2,14);
	
	return 0;
}
