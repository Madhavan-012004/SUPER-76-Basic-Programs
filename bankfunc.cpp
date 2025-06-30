#include <iostream>
using namespace std;

int deposit(int current_balance, int amount);
int withdraw(int current_balance, int amount);
void balance(int current_balance);

int main() {
    int choice, amount, current_balance = 0;
    do {
        cout<<"***********************************" << endl;
        cout<<"*         Bank Management         *" << endl;
        cout << "Welcome to the Bank!" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Check Balance" << endl;
        cout << "4. Exit" << endl;
        cout<<"***********************************" << endl;
        cout << "Please select an option from the menu above." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                current_balance = deposit(current_balance, amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                current_balance = withdraw(current_balance, amount);
                break;
            case 3:
                balance(current_balance);
                break;
            case 4:
                cout << "Thank you for using our service!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

int deposit(int current_balance, int amount) {
    if (amount <= 0) {
        cout << "Deposit amount must be positive!" << endl;
    } else {
        current_balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    return current_balance;
}

int withdraw(int current_balance, int amount) {
    if (amount <= 0) {
        cout << "Withdrawal amount must be positive!" << endl;
    } else if (amount > current_balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        current_balance -= amount;
        cout << "Withdrawn: " << amount << endl;
    }
    return current_balance;
}

void balance(int current_balance) {
    cout << "Current balance: " << current_balance << endl;
}
