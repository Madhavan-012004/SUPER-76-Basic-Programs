#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, n;
    string opt;
    cout << "Enter the value of a: "; 
    cin >> a;
    cout << "Left or Right: ";
    cin >> opt;
    if (opt == "left" || opt == "Left") {
        cout << "Enter the number of shifts: ";
        cin >> n;
        a = a << n;  // left shift
    } else if (opt == "right" || opt == "Right") {
        cout << "Enter the number of shifts: ";
        cin >> n;
        a = a >> n;  // right shift
    } else {
        cout << "Invalid option! Please enter 'Left' or 'Right'." << endl;
        return 1;  // Exit if error
    }

    cout << "After shift: " << a << endl;
    return 0;
}
