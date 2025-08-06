#include<iostream>
using namespace std;
int main() {
	int scores[5];
	int i, sum = 0;
	float avg;
	
	cout<<"Enter scores for 5 subject: ";
	for(i=0; i<5; i++) {
		cout<<"Score "<<i + 1<<" : ";
		cin>>scores[i];	
		
		if(scores[i] < 0 || scores[i] > 100 ) {
			cout<<"Invalid score!! Please enter marks between 0 and 100."<<endl;
			return 1;
		}
		 sum += scores[i];
	}
	
	avg = sum/5;
	cout<<"Average score of student is: "<<avg<<endl;
	
	switch((int)avg/10) {
		case 10:
		case 9:
		case 8:
			cout<<"Grade A";
			break;
			
		case 7:
		case 6:
			cout<<"Grade B";
			break;
		
		case 5:
			cout<<"Grade C";
			break;
			
		case 4:
			cout<<"Grade D";
			break;
			
		default:
			cout<<"Grade = Fail";
			
	}
	return 0;
}
