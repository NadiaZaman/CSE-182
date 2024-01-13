#include <iostream>

int main() {
    // Define an integer array with some sample values.
    int arr[] = {5, 8, 2, 10, 15, 3};

    // Calculate the number of elements in the original array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Define the element to be deleted and its position.
    int elementToDelete = 10; // Element to be deleted.
    int position = -1;        // Position (index) where the element is found (initialized to -1 for not found).

    // Search for the element to be deleted and its position in the array.
    for (int i = 0; i < n; i++) {
        if (arr[i] == elementToDelete) {
            position = i;
            break; // Exit the loop when the element is found.
        }
    }

    // Check if the element was found in the array.
    if (position == -1) {
        std::cout << "Element not found in the array." << std::endl;
        return 1; // Exit with an error code.
    }

    // Create a new array with one less element to accommodate the deletion.
    int newArray[n - 1];

    // Copy elements from the original array to the new array up to the deletion position.
    for (int i = 0; i < position; i++) {
        newArray[i] = arr[i];
    }

    // Copy the remaining elements from the original array to the new array, excluding the deleted element.
    for (int i = position; i < n - 1; i++) {
        newArray[i] = arr[i + 1];
    }

    // Print the new array after the element deletion.
    std::cout << "Array after deletion: ";
    for (int i = 0; i < n - 1; i++) {
        std::cout << newArray[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Exit successfully.
}
