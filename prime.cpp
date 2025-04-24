#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
            count++;
        }
    }
    if(count==2)
    {
        cout<<"It is prime!";
    }
    else
    cout<<"It is not prime!";
    return 0;
}