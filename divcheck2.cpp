#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"Enter the number: ";
cin>>a;
if(a%3!=0 && a%4==0) // less than 40
{
cout<<"The num "<<a<<" is Diviseble Only by 4 but not 3"<< endl;
}
else // both equal
cout<<"The num "<<a<<" is Diviseble by both 3 and 4"<< endl;
return 0;
}