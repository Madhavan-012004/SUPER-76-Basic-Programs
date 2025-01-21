#include <iostream>
using namespace std;

// Function to find and print factors of a number
void findFactors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int num;

    // Input a number from the user
    cout << "Enter a positive integer: ";
    cin >> num;

    // Call the function to find factors
    findFactors(num);

    return 0;
}
