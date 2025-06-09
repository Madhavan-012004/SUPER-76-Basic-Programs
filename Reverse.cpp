#include <iostream>
using namespace std;

// Function to reverse a number  
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;       // last digit
        reversed = reversed * 10 + digit; // Add the digit to the reversed number
        num /= 10;                 // remove last digiyt
    }
    return reversed;
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    int reversedNum = reverseNumber(num);

    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
