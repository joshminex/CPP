#include <iostream>

using namespace std;

int main(){
	
	double num1 ;
	double num2 ;
	
	cout<<"Input the 1st number: ";
	cin>>num1;
	cout<<"Input the 2nd number: ";
	cin>>num2;
	
	if(num1 > num2){
		
		cout<<num1<<" is the greatest";
		
	}
	
	else if(num1 == num2){
		
		cout<<"They are equal";
		
	}
	
	else{
		
		cout<<num2<<" is the greatest";
		
	}
	
}