#include <iostream>

int main() {
    // Define an integer array with some sample values.
    int arr[] = {5, 8, 2, 10, 15, 3};

    // Calculate the number of elements in the original array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Define the element to be inserted and the position where it should be inserted.
    int elementToInsert = 7; // Element to be inserted.
    int position = 2;        // Position (index) where the element should be inserted.

    // Check if the position is valid.
    if (position < 0 || position > n) {
        std::cout << "Invalid position for insertion." << std::endl;
        return 1; // Exit with an error code.
    }

    // Create a new array with one more element to accommodate the inserted element.
    int newArray[n + 1];

    // Copy elements from the original array to the new array up to the insertion position.
    for (int i = 0; i < position; i++) {
        newArray[i] = arr[i];
    }

    // Insert the element at the specified position in the new array.
    newArray[position] = elementToInsert;

    // Copy the remaining elements from the original array to the new array.
    for (int i = position + 1; i <= n; i++) {
        newArray[i] = arr[i - 1];
    }

    // Print the new array with the inserted element.
    std::cout << "Array after insertion: ";
    for (int i = 0; i <= n; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Exit successfully.
}
