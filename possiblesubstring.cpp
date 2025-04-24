#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int n = str.length(); // length of the string

    cout << "All possible substrings:\n";
    for (int i = 0; i < n; ++i) { // for seek 1st char
        for (int j = i+1; j <=n; ++j) { // for seek 2nd char
            cout << str.substr(i, j) << endl; //print the 1,2 characters
        }
    }

    return 0;
}
