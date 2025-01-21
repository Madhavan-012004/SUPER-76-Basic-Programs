#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;       // Extract the last digit
        reversed = reversed * 10 + digit; // Append the digit to the reversed number
        num /= 10;                 // Remove the last digit from the number
    }
    return reversed;
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Call the function to reverse the number
    int reversedNum = reverseNumber(num);

    // Display the reversed number
    cout << "Reversed number: " << reversedNum << endl;

    return 0;
}
