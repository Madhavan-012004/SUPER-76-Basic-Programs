#include<iostream>
using namespace std;

int main()
{
	int a,b,temp;
	cout<<"Enter the a:";
	cin>>a;
	cout<<"Enter the b:";
	cin>>b;
	temp = a;
	a=b;
	b=temp;
	cout<< "After Swapping a = " << a << " & b = "<< b <<endl;

return 0;
}