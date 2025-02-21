#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string str;
    getline(cin, str);  // getting the string
    vector<int> num; //detcaring the dynamic strage of array
    int value;

    stringstream ss(str); //stream conversion for conversion
    while (ss >> value) {
        num.push_back(value);
    }

    int n = num.size();  // printing the converted array
    for (int j = 0; j < n; j++) {
        cout << num[j] << " ";
    }

    return 0;
}
