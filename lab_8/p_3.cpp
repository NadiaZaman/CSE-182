#include <iostream>

int main() {
    int rows, cols, scalar;

    // Prompt the user to enter the number of rows and columns for the matrix.
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Define a 2D integer array for the matrix.
    int matrix[rows][cols];

    // Prompt the user to enter elements for the matrix.
    std::cout << "Enter elements of the matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Prompt the user to enter the scalar value for multiplication.
    std::cout << "Enter the scalar value for multiplication: ";
    std::cin >> scalar;

    // Perform scalar multiplication on the matrix.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] *= scalar;
        }
    }

    // Display the result of the scalar matrix multiplication.
    std::cout << "Result of scalar matrix multiplication:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl; // Move to the next row for output.
    }

    return 0; // Exit the program with success.
}
