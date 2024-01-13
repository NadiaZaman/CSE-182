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

    // Initialize a flag variable to check whether the matrix is an identity matrix.
    bool isIdentityMatrix = true;

    // Check if the matrix is an identity matrix.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // Diagonal elements should be 1 in an identity matrix.
                if (matrix[i][j] != 1) {
                    isIdentityMatrix = false;
                    break;
                }
            } else {
                // Non-diagonal elements should be 0 in an identity matrix.
                if (matrix[i][j] != 0) {
                    isIdentityMatrix = false;
                    break;
                }
            }
        }
        if (!isIdentityMatrix) {
            break; // If not an identity matrix, exit the loop.
        }
    }

    // Check and display whether the matrix is an identity matrix or not.
    if (isIdentityMatrix) {
        std::cout << "The matrix is an identity matrix." << std::endl;
    } else {
        std::cout << "The matrix is not an identity matrix." << std::endl;
    }

    return 0; // Exit the program with success.
}
