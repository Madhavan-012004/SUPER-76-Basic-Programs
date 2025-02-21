#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int i;
    string str = "10 20 30 40 50";
    vector<int> numbers;
    stringstream ss(str);
    int num;

    while (ss >> num) {
        numbers.push_back(num);
        
    }

}
