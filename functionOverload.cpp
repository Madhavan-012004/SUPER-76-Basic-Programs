#include <iostream>
using namespace std;

int addition(int a, int b);
int addition(int a, int b, int c);
int addition(int a, int b, int c, int d);

int main() {
    int num;
    int a[10];
    cout <<"Enter the numbe of integers to be added: ";
    cin >> num;
    for (int i =0;i<num;i++){
        cout << "Enter number " << i + 1 << ": ";
        cin >> a[i];
    }
    if (num == 2) {
        addition(a[0], a[1]);
    } else if (num == 3) {
        addition(a[0], a[1], a[2]);
    } else if (num == 4) {
        addition(a[0], a[1], a[2], a[3]);
    } else {
        cout << "Invalid number of integers. Please enter 2, 3, or 4." << endl;
    }
}

int addition(int a, int b) {
    cout << "The sum is: " << a + b << endl;
    return a + b;
}

int addition(int a, int b, int c) {
    cout << "The sum of three numbers is: " << a + b + c << endl;
    return a + b + c;
}   

int addition(int a, int b, int c, int d) {
    cout << "The sum of four numbers is: " << a + b + c + d << endl;
    return a + b + c + d;
}
