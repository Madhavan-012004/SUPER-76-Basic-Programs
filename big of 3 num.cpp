#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    // Taking input for three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Checking for the greatest number
    if (num1 >= num2 && num1 >= num3) {
        cout << "The greatest number is: " << num1 << endl;
    } else if (num2 >= num1 && num2 >= num3) {
        cout << "The greatest number is: " << num2 << endl;
    } else {
        cout << "The greatest number is: " << num3 << endl;
    }

    return 0; // Exit the program
}
