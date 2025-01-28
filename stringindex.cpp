#include <iostream>
#include <string>
using namespace std;
int main()
{
    string r,s;
    cout<<"Enter the string: ";
    getline(cin, r);
    s=r.substr(2,5); // slicing the string from index value
    cout<<"The substring of the string is: "<<s;
    return 0;
    


}
