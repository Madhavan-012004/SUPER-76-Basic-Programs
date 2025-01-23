#include<iostream>
using namespace std;

int main()
{
int num,sum=0;
cout<<"Enter the Number:";
cin>>num;
while(num>0)
	{
	sum=sum+num%10; // Get the Remainder and add to the sum.
	num=num/10; // remove the last digit.
	}
cout<<"The Sum of Number is:"<<sum<<endl;
return 0;
}
