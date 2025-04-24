#include <iostream>
using namespace std;

void poss(int n) // function to make positive
{
    if(n<=0)
    {
        cout <<"Value = "<< abs(n)<<endl; // making absolute
    }
    else
    {
        cout <<"Value = "<< n<<endl;
    }

}
int main()
{
    int a,b,sum,dif;
    cout<<"Enter the Number A: ";
    cin>>a;
    cout<<"Enter the Number B: ";
    cin>>b;
    sum=a+b;
    dif=a-b;
    poss(sum); //function call
    poss(dif); //function call
    return 0;
}