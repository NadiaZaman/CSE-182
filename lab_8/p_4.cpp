#include <iostream>

int main() {
    int rows, cols;

    // Prompt the user to enter the number of rows and columns for the matrices.
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;

    // Define two 2D integer arrays for the matrices to be compared.
    int matrix1[rows][cols];
    int matrix2[rows][cols];

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

    // Assume the matrices are equal initially.
    bool areEqual = true;

    // Compare the two matrices element-wise.
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                // If any pair of elements is not equal, set the flag to false and break.
                areEqual = false;
                break;
            }
        }
        if (!areEqual) {
            break; // If the flag is false, no need to check further; exit the loop.
        }
    }

    // Check and display the result of matrix equality.
    if (areEqual) {
        std::cout << "Matrices are equal." << std::endl;
    } else {
        std::cout << "Matrices are not equal." << std::endl;
    }

    return 0; // Exit the program with success.
}
