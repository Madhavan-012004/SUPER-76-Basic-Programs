#include <iostream>
using namespace std;

int main() {
    int M, N, sum = 0;
    cout << "Enter M and N: ";
    cin >> M >> N;
    for (int i = M; i <= N; i++) sum += i;
    cout << "Sum: " << sum << endl;
    return 0;

}