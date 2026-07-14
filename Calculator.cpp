#include <iostream>

using namespace std;

int main(){
	
	char choice;
	float first;
	float second;
	float sum = first + second;
	float subtract = first - second;
	float multiple = first * second;
	float divide = first / second;
	
	cout<<"1. Addition"<<endl;
	cout<<"2. Subtraction"<<endl;
	cout<<"3. Multiplication"<<endl;
	cout<<"4. Division"<<endl;
	cout<<"5. Exit"<<endl;
	cin>>choice;
	
	switch(choice){
		
		case '1':
		  cout<<"Enter the first number: ";
		  cin>>first;
		  cout<<"Enter the second number: ";
		  cin>>second;
		  sum = first + second;
		  cout<<"Result = "<<sum;
		  break;
		case '2':
		  cout<<"Enter the first number: ";
		  cin>>first;
		  cout<<"Enter the second number: ";
		  cin>>second;
		  subtract = first - second;
		  cout<<"Result = "<<subtract;
		  break;	
		case '3':
		  cout<<"Enter the first number: ";
		  cin>>first;
		  cout<<"Enter the second number: ";
		  cin>>second;
		  multiple = first * second;
		  cout<<"Result = "<<multiple;
		  break;
		case '4':
		  cout<<"Enter the first number: ";
		  cin>>first;
		  cout<<"Enter the second number: ";
		  cin>>second;
		  divide = first / second;
		  cout<<"Result = "<<divide;
		  break;
		case '5':
		  break;	
		default:
			cout<<"Wrong number!";
			break;
	}
	
}