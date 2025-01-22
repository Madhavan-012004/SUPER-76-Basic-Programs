#include<iostream>
using namespace std;

int main()
{
	int num, rev=0;
	cout<< "Enter the number: ";
	cin>>num;
	while(num!=0)
	{
		int rem = num % 10; // getting the remainder
		rev = rev *10 +rem; // multiple the digits and add the remainder to the last
		num = num/10;// dividing the num by decimal
		
	}
	cout<<"reversed: "<< rev<<endl; // printing the output
	return 0;
}
