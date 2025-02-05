#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<5; i++)
    {   
        cout<<arr[i]<<",";
    }
    int* ptr = arr;
    cout<<"\n";
    cout<<"Address using andeson: "<<&arr<<endl;
    cout<<"Address using pointer: "<<ptr<<endl;

}