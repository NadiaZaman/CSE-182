#include <iostream>

int main() {
    int rows, cols;

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

    // Initialize a variable to count the number of non-zero elements.
    int nonZeroCount = 0;

    // Count the number of non-zero elements in the matrix.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }

    // Check and display whether the matrix is sparse or not.
    if (nonZeroCount <= (rows * cols) / 2) {
        std::cout << "The matrix is sparse." << std::endl;
    } else {
        std::cout << "The matrix is not sparse." << std::endl;
    }

    return 0; // Exit the program with success.
}
