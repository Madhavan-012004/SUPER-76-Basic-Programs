#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) {
        return false; // Numbers less than 2 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If divisible, not prime
        }
    }
    return true; // Prime if no divisors found
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Call the isPrime function and display the result
    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
