#include <iostream>
#include <cmath>

class AreaCalculator {
public:
    // Compute the area of a triangle
    double area(double base, double height) {
        return 0.5 * base * height;
    }

    // Compute the area of a circle
    double area(double radius) {
        return M_PI * pow(radius, 2);
    }
};

int main() {
    AreaCalculator calculator;

    // Calculate the area of a triangle
    double triangleArea = calculator.area(4.0, 5.0);
    std::cout << "Area of the triangle: " << triangleArea << std::endl;

    // Calculate the area of a circle
    double circleArea = calculator.area(2.5);
    std::cout << "Area of the circle: " << circleArea << std::endl;

    return 0;
}
