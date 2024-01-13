#include <iostream>

// Function prototype to calculate the sum of two arrays
void sumArrays(int arr1[], int arr2[], int result[], int size);

int main() {
    int size;

    // Prompt the user to enter the size of the arrays
    std::cout << "Enter the size of the arrays: ";
    std::cin >> size;

    // Check if the array size is non-positive
    if (size <= 0) {
        std::cerr << "Array size must be a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Declare two arrays of integers with the given size
    int arr1[size], arr2[size], result[size];

    // Prompt the user to enter elements for the first array
    std::cout << "Enter elements for the first array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr1[i];
    }

    // Prompt the user to enter elements for the second array
    std::cout << "Enter elements for the second array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr2[i];
    }

    // Call the sumArrays function to calculate the sum of the two arrays
    sumArrays(arr1, arr2, result, size);

    // Display the sum of the arrays
    std::cout << "Sum of the arrays:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << result[i] << " ";
    }

    return 0; // Exit the program with success
}

// Function definition to calculate the sum of two arrays
void sumArrays(int arr1[], int arr2[], int result[], int size) {
    // Iterate through the arrays and calculate the sum element by element
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}
