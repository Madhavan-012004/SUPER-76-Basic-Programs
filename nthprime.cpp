#include <iostream>
using namespace std;

bool isPrime(int num) { // check for prime
    if (num < 2) return false; 
    for (int i = 2; i * i <= num; i++) { 
        if (num % i == 0) return false;
    }
    return true;
}

int nthPrime(int n) {
    int count = 0, num = 1;
    while (count < n) {
        num++;
        if (isPrime(num)) {
            count++;
        }
    }
    return num;
}


int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The " << n << "th prime number is: " << nthPrime(n) << endl;
    return 0;
}