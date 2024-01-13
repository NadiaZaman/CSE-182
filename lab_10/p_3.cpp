#include <iostream>

// Function prototype for sorting the array using pointers
void sortArray(int* arr, int size);

int main() {
    int size;

    // Prompt the user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    // Check if the array size is non-positive
    if (size <= 0) {
        std::cerr << "Array size must be a positive integer." << std::endl;
        return 1; // Exit with an error code
    }

    // Declare an array of integers with the given size
    int arr[size];

    // Prompt the user to enter elements for the array
    std::cout << "Enter elements of the array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Call the sortArray function to sort the array
    sortArray(arr, size);

    // Display the sorted array
    std::cout << "Sorted array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0; // Exit the program with success
}

// Function definition to sort the array using pointers (Bubble Sort)
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements and swap if necessary
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
