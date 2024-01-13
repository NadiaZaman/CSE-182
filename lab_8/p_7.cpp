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

    // Display the lower triangular matrix.
    std::cout << "Lower Triangular Matrix:" << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Check if the current element is below or on the main diagonal.
            if (i >= j) {
                std::cout << matrix[i][j] << " ";
            } else {
                // Print a placeholder (usually 0 for lower triangular).
                std::cout << "0 ";
            }
        }
        std::cout << std::endl; // Move to the next row for output.
    }

    return 0; // Exit the program with success.
}
