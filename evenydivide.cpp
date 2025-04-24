#include<iostream>
using namespace std;
void checkif(int n)
{
    if(n%2==0)
    {
        if(n%27==0)
        {
            cout<<"The number is Evenly Divided by 27";
        }
    }
    else
    cout<<"The Number"<<n<<" is Not Evenly Divided by 27";
}
int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    checkif(n);
    return 0;
}
