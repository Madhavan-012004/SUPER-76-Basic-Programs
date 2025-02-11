#include <iostream>

void concatenateArrays(int* arr1, int size1, int* arr2, int size2, int* result) {
    for (int i = 0; i < size1; i++)
        result[i] = arr1[i];

    for (int i = 0; i < size2; i++)
        result[size1 + i] = arr2[i];
}

int main() {
    int size1, size2;

    std::cout << "Enter size of first array: ";
    std::cin >> size1;
    int* arr1 = new int[size1];

    std::cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++)
        std::cin >> arr1[i];

    std::cout << "Enter size of second array: ";
    std::cin >> size2;
    int* arr2 = new int[size2];

    std::cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++)
        std::cin >> arr2[i];

    int* result = new int[size1 + size2];

    concatenateArrays(arr1, size1, arr2, size2, result);

    std::cout << "Concatenated Array: ";
    for (int i = 0; i < size1 + size2; i++)
        std::cout << result[i] << " ";

    // Free dynamically allocated memory
    delete[] arr1;
    delete[] arr2;
    delete[] result;

    return 0;
}
