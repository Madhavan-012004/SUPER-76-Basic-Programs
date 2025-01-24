#include <iostream>
using namespace std;

int main()
{
 	string s1,s2;
	cout<<"Enter the string 1: ";
	cin>>s1;
	cout<<"Enter the string 2: ";
	cin>>s2;
	if(s1.compare(s2)==true)// comparing the s1 and s2
		{
		cout<<"The string is compared"<<endl;
		}
	else{
		cout<<"The string is not compared"<<endl;
		}
	if(s1==s2) // check equals or not s1 and s2
{
		cout<<"The string is equal";
		}
	else{
		cout<<"The string is not equal";
		}
return 0;		
}
