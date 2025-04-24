#include<iostream>
using namespace std;

int main()
{
int a,b;
cout<<"Enter the number a: ";
cin>>a;
cout<<"Enter the number b: ";
cin>>b;

if(a<b) // b greater
{
cout<<"B is Greater"<< endl;
}
else if(a>b) // a greater
{
cout<<"A is Greaater"<< endl;
}
else // both equal
cout<<"its Equal"<< endl;
return 0;
}