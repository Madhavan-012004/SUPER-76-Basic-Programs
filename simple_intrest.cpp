#include <iostream>
using namespace std;

int main() {
    double P, R, T, SI;

    cout << "Enter Principal amount: ";
    cin >> P;
    cout << "Enter Rate of Interest: ";
    cin >> R;
    cout << "Enter Time (in years): ";
    cin >> T;

    SI = (P * T * R) / 100;

    cout << "Simple Interest: " << SI << endl;

    return 0;
}
