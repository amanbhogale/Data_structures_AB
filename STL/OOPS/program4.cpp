
#include <iostream>
#include <vector>

class MAT {
private:
    int m; // Number of rows
    int n; // Number of columns
    std::vector<std::vector<int>> matrix; // Matrix elements

public:
    // Constructor
    MAT(int rows, int columns) : m(rows), n(columns), matrix(rows, std::vector<int>(columns, 0)) {}

    // Function to read matrix elements
    void readMatrix() {
        std::cout << "Enter matrix elements:" << std::endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> matrix[i][j];
            }
        }
    }

    // Function to display matrix elements
    void displayMatrix() const {
        std::cout << "Matrix:" << std::endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    // Matrix addition
    MAT operator+(const MAT& other) const {
        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    // Matrix subtraction
    MAT operator-(const MAT& other) const {
        MAT result(m, n);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
            }
        }
        return result;
    }

    // Matrix multiplication
    MAT operator*(const MAT& other) const {
        int p = other.n;
        MAT result(m, p);
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < p; j++) {
                for (int k = 0; k < n; k++) {
                    result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    int m1, n1, m2, n2;

    std::cout << "Enter the number of rows and columns for matrix 1: ";
    std::cin >> m1 >> n1;
    MAT matrix1(m1, n1);
    matrix1.readMatrix();

    std::cout << "Enter the number of rows and columns for matrix 2: ";
    std::cin >> m2 >> n2;
    MAT matrix2(m2, n2);
    matrix2.readMatrix();

    if (n1 != m2) {
        std::cerr << "Error: The number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication." << std::endl;
        return 1;
    }

    // Matrix addition
    MAT addition = matrix1 + matrix2;
    addition.displayMatrix();

    // Matrix subtraction
    MAT subtraction = matrix1 - matrix2;
    subtraction.displayMatrix();

    // Matrix multiplication
    MAT multiplication = matrix1 * matrix2;
    multiplication.displayMatrix();

    return 0;
}

