#include<iomanip>
#include<iostream>
using namespace std;
int main() {
	int num=20;
	cout<<"Before setting the fill char: "<<num<<setw(5);
	cout<<num<<endl;
	
	cout<<"Setting the fill char"
	   <<"setfill to *: \n"
	   <<setfill('*')
	   <<setw(6);
	cout<<num<<endl;
	return 0;	
}

