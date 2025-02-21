#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str = "10 20 30 40 50";
    int num[5];
    int i = 0;

    stringstream ss(str);
    while (ss >> num[i]) {
        i++;
    }

    // Print the array
    for (int j = 0; j < i; j++) {
        cout << num[j] << " ";
    }

    return 0;
}
