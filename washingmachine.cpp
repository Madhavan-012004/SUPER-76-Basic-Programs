#include<iostream>
using namespace std;
void limit(int n)
{
    if(n>=0&&n<=2000) //round 1
    {
        cout<<"The time take for " <<n<< " L Weight is 25 Mins."; 
    }
    else if(n>=2001&&n<=4000) // round 2
    {
        cout<<"The time take for " <<n<< " L Weight is 35 Mins."; 
    }
     else if(n>=4001&&n<=7000) // round 3
    {
        cout<<"The time take for " <<n<< " L Weight is 45 Mins."; 
    }
    else if(n>=7000) // high value
    {
        cout<<"The Amount of Cloth " <<n<< " L is Huge"; 
    }
    else // invalid number or number not exist
    {
        cout<<"INVALID INPUT";
    }
}
int main(){
    int n;
    cout<<"Enter the limit of the machine: ";
    cin>>n;
    limit(n); //function call
    return 0;

}