#include<iostream>
using namespace std;
int add(int a, double b) {
	return a + (int)b;
}
double add(double a, int b) {
	return a + (double)b;
}
int main() {
	cout<<add(2,3.4)<<endl;
	cout<<add(3.4,6);
	return 0;
}
