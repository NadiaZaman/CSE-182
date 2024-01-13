#include <iostream>

int main() {
    // Define an integer array with some sample values.
    int arr[] = {5, 8, 2, 10, 15, 3};

    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Create a temporary array to store the reversed elements.
    int reversedArr[n];

    // Initialize variables for array manipulation.
    int start = 0;     // Start index of the original array.
    int end = n - 1;   // End index of the original array.

    // Copy elements from the original array to the reversed array in reverse order.
    while (start < n) {
        reversedArr[start] = arr[end]; // Copy the element from the end of the original array.
        start++;                      // Move to the next index in the original array.
        end--;                        // Move to the previous index in the original array.
    }

    // Print the reversed array.
    std::cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        std::cout << reversedArr[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Exit successfully.
}
