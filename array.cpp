#include<iostream>
using namespace std;
int main() 
{ 
    int n;
    cout<<"Enter the size of array: ";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<i+1<<" element: ";
        cin>>arr[i];
    }
    cout<<"Entered Array is: [";
    for (int i = 0; i < n; i++) {
        cout << abs(arr[i]); 
        if (i < n - 1) cout << ", ";
    }
    cout<<"]";
    
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    cout<<endl;
    cout<<"The Max value of array is "<< max<<endl;
    return 0;
}
