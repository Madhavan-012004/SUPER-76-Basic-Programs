#include <iostream>
#include <string>
#include <regex>
using namespace std;

//function
string removesp(const string& str) {
    regex pattern("[^a-zA-Z]"); // remove pattern
    return regex_replace(str, pattern, ""); 
}

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str; // input string

    cout << "Processed string: " << removesp(str) << endl;
    return 0;
}
