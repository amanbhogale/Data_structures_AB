#include <iostream>

int main() {
    try {
        // Attempt to divide by zero
        int numerator = 10;
        int denominator = 0;
        if (denominator == 0) {
            throw std::runtime_error("Division by zero error");
        }
        int result = numerator / denominator;
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        // Catch and handle the exception
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
