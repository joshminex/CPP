#include <iostream>

using namespace std;

int main(){
	
	int mark[5];
	int i;
	
	for(int i=0; i<=5; i++){
		
		cout<<"Enter marks: ";
		cin>>mark[i];
		
	}
	
	for(int i=0; i<=5; i++){
		
		cout<<mark[i]<<" ";
		
	}
	cout<<"\n"<<"Third Mark "<<mark[3];

	return 0;
}