#include <iostream>

using namespace std;

int main(){
	
	int mark[5];
	int i;
	int sum = 0;
	
	for(int i=0; i<=5; i++){
		
		cout<<"Enter marks: ";
		cin>>mark[i];
//		sum+=mark[i];
		
	}
	
	for(int i=0; i<=5; i++){
		
		cout<<mark[i]<<" ";
		
	
		
	}
//	cout<<"sum is "<<sum;

	return 0;
}