#include <iostream>
using namespace std;
int main()
{
    int arr[3];
    int len = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<len; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"First: "<<*arr<<endl;
    cout<<"Second: "<<*(arr+1)<<endl;
    cout<<"Third: "<<*(arr+2)<<endl;
    
    return 0;
    
}