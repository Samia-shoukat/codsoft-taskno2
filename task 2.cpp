#include<iostream>
using namespace std;
int main()
{
	float a,b;
	char op;
	cout<<"Enter 1st number :";
	cin>>a;
	cout<<"\nEnter second number :";
	cin>>b;
	cout<<"\nEnter an operator:";
	cin>>op;
	switch(op)
	{
		case '+':cout<<"\nAddition of "<<a<<" and "<<b<<" is: "<<a+b;
		        break;
        case '-':cout<<"\nSubtraction of "<<a<<" and "<<b<<" is: "<<a-b;
                break;
        case '*':cout<<"\nMultiplication of "<<a<<" and "<<b<<" is: "<<a*b; 
		        break;
		case '/':cout<<"\nDivision of "<<a<<" and "<<b<<" is: "<<a/b;	
		        break;
		default:cout<<"\nInvalid operator!!";			       	
	}
	return 0;
}

