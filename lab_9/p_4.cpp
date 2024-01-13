#include <iostream>

// Function prototype to reverse an array
void reverseArray(int arr[], int size);

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

    // Call the reverseArray function to reverse the array
    reverseArray(arr, size);

    // Display the reversed array
    std::cout << "Reversed array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }

    return 0; // Exit the program with success
}

// Function definition to reverse an array
void reverseArray(int arr[], int size) {
    int start = 0;       // Index of the first element
    int end = size - 1;  // Index of the last element

    // Swap elements from the start and end of the array
    while (start < end) {
        // Swap arr[start] and arr[end]
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the indices inward
        start++;
        end--;
    }
}
