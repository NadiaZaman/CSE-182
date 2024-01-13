#include <iostream>

int main() {
    int rows, cols;

    // Prompt the user to enter the number of rows and columns for the matrices.
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Define two 2D integer arrays for the matrices to be subtracted.
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int result[rows][cols]; // Array to store the result of the subtraction.

    // Prompt the user to enter elements for the first matrix.
    std::cout << "Enter elements of the first matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    // Prompt the user to enter elements for the second matrix.
    std::cout << "Enter elements of the second matrix:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    // Subtract the two matrices element-wise.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Display the result of the matrix subtraction.
    std::cout << "Result of matrix subtraction:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl; // Move to the next row for output.
    }

    return 0; // Exit the program with success.
}
