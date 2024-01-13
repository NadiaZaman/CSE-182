#include <iostream>

int main() {
    int n;

    // Prompt the user to enter the size (number of rows and columns) of the square matrix.
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> n;

    // Define a 2D integer array for the square matrix.
    int matrix[n][n];

    // Prompt the user to enter elements for the square matrix.
    std::cout << "Enter elements of the square matrix:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Initialize a variable to store the sum of the upper triangular matrix elements.
    int upperTriangularSum = 0;

    // Calculate the sum of the upper triangular matrix elements.
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            upperTriangularSum += matrix[i][j];
        }
    }

    // Display the sum of the upper triangular matrix elements.
    std::cout << "Sum of the upper triangular matrix elements: " << upperTriangularSum << std::endl;

    return 0; // Exit the program with success.
}
