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

    // Initialize a variable to store the sum of the main diagonal elements.
    int diagonalSum = 0;

    // Calculate the sum of the main diagonal elements.
    for (int i = 0; i < rows && i < cols; i++) {
        diagonalSum += matrix[i][i];
    }

    // Display the sum of the main diagonal elements.
    std::cout << "Sum of the main diagonal elements: " << diagonalSum << std::endl;

    return 0; // Exit the program with success.
}
