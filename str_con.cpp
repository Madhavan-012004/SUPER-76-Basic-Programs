#include <iostream>
#include <string>

int main() {
    std::string str1, str2, result;

    std::cout << "Enter first string: ";
    std::getline(std::cin, str1);

    std::cout << "Enter second string: ";
    std::getline(std::cin, str2);

    result = str1 + str2;  // Concatenation

    std::cout << "Concatenated String: " << result << std::endl;

    return 0;
}
