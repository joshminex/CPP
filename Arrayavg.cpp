#include <iostream>

using namespace std;

int main(){
	
	int avg;
	int i;
	int sum;
	int mark[5];
	
	for(int i=0; i<=4; i++){
		
		cout<<"Enter mark: ";
		cin>>mark[i];
		sum += mark[i];
		
		
	}
	
	for(int i=0; i<=4; i++){
		
		cout<<mark[i]<<" ";
		
	}
	
	int n = sizeof(mark)/sizeof(mark[0]);
	avg = sum/n;
	
	cout<<'\n'<<avg;
	
	
}