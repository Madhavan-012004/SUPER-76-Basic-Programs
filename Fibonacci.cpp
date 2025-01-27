#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c=0,n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<a<<","<<b<<","; //print the 1st 2 numbers
    c=a+b;
    while(c<n) // check the num is greater or not
    {
        cout<<c<<",";
        a=b; // increment
        b=c; // increment
        c=a+b; // next value
    }
    return 0;


}
