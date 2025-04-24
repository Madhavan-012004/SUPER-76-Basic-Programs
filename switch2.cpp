#include<iostream>
using namespace std;

int main()
int i,res=10;

for(i=0;i<10;i=i+1)
{
    switch(i)
    {
        case 1: res = i;
        case 3: res = res + 1;
        case 5: res = res - 1;
        case 7: res = res +i;
        case 9: res = res-i;

    }


}

cout>>res;