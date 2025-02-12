#include <iostream>
using namespace std;

int main() {
    char str[100], rev[100]; 
    int length = 0;

    cout << "Enter a string: "; //entering the string
    cin >> str;

    while (str[length] != '\0') { 
        length++;  
    }

    for (int i = 0; i < length; i++) {
        rev[i] = str[length - 1 - i];  
    }
    rev[length] = '\0';  

    bool isPalindrome = true; //checking the palindrom is or not
    for (int i = 0; i < length; i++) {
        if (str[i] != rev[i]) { 
            isPalindrome = false;
            break; 
        }
    }

    if (isPalindrome)
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;

    return 0;
}
