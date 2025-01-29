#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the Year: ";
    cin >> year;
    if (year%4==0 || (year%100==0&&year%400==0))
    {
        cout<<"It is leap year";
    }
    else
    cout<<"It is not a leap year";

    return 0;
}