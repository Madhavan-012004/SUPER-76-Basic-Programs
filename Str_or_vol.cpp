#include <iostream>
using namespace std;
int main(){
string str;
cout<<"Enter the string:";
cin>>str;
for(int i=0;i<=str.length();i++)
{
char ch = str[i];
        if (ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
            cout << ch << " is a vowel" << endl;
        } else {
            cout << ch << " is a consonant" << endl; 
        }
    }
return 1;  
}