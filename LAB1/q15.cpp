#include<iostream>
using namespace std;
int main() {
	int n, i;
	long int fact = 1;
	cout<<"Enter a positive number: ";
	cin>>n;
	for(i=1; i<=n; i++) {
		fact *= i;
	}
	cout<<"The factorial of "<<n<<" using for loop is "<<fact<<endl;
	
	while(i<=n) {
		fact *= i;
		++i;
	}
	cout<<"The factorial of "<<n<<" using while loop is "<<fact<<endl;
	
	return 0;
}
