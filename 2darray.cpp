#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the square matrix: ";
    cin>>n;
    int arr[n][n];
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j){
                (arr[i][j]) = 1;
            }
            else
            arr[i][j] = 0;
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}