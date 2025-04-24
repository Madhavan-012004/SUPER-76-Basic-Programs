#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter the String: ";
    getline(cin, str);

    int len = str.length();

    for (int i = 0; i < len; i++) 
    {
        switch (str[i]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                cout << str[i] << " is a vowel." << endl;
                break;
            default:
                cout << str[i] << " is not a vowel." << endl;
                break;
        }
    }
    
    return 0;
}
