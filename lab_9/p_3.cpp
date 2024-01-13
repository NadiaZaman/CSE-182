#include <iostream>

// Function prototype to find the largest element in an array
int findLargestElement(int arr[], int size);

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

    // Call the findLargestElement function and store the result in a variable
    int largest = findLargestElement(arr, size);

    // Display the largest element
    std::cout << "The largest element in the array is: " << largest << std::endl;

    return 0; // Exit the program with success
}

// Function definition to find the largest element in an array
int findLargestElement(int arr[], int size) {
    // Assume the first element is the largest
    int largest = arr[0];

    // Iterate through the array to find the largest element
    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i]; // Update the largest element if a larger element is found
        }
    }

    return largest; // Return the largest element
}
