#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
    
int main()
{
    vector<int> arr;
    string str;

    getline(cin,str);
    stringstream ss(str);
    int num;

    while (ss>>num)
    {
        arr.push_back(num);
    }
    int n=arr.size();
    bool found = false;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = true;
                break;
            }
        }
    }

    if(!found)
    {
        cout<<"[]";
    }

}