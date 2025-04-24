#include<iostream>
using namespace std;

int main()
{
int a;
cout<<"Enter the number: ";
cin>>a;
if(a<=40) // less than 40
{
cout<<"belongs to grp 1"<< endl;
}
else if(a>40 && a<=50) // a greater
{
cout<<"belongs to grp 2"<< endl;
}
else // both equal
cout<<"belongs to grp 3"<< endl;
return 0;
}