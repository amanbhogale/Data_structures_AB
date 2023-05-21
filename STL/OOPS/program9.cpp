#include <iostream>

template <typename T, size_t N>
T findMin(const T (&arr)[N]) {
    T minVal = arr[0];
    for (size_t i = 1; i < N; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    int intArray[] = {5, 3, 9, 2, 7};
    double doubleArray[] = {2.5, 1.1, 3.7, 0.9};

    // Finding minimum value in an integer array
    int minInt = findMin(intArray);
    std::cout << "Minimum value in intArray: " << minInt << std::endl;

    // Finding minimum value in a double array
    double minDouble = findMin(doubleArray);
    std::cout << "Minimum value in doubleArray: " << minDouble << std::endl;

    return 0;
}
