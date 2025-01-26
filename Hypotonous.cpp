#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,b,c;

    cout<<"Enter the side A: " ;
    cin>> a;
    cout<<"Enter the side B: " ;
    cin>> b;
    a=pow(a,2); //a^2
    b=pow(b,2); //b^2   
    c=sqrt(a+b); //sqrt of a square + b square
    cout<<"The Hypotonus of triangle is : "<<c;



    return 0;

}
