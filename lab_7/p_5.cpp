#include <iostream>

int main() {
    // Define an integer array with some sample values that may contain duplicates.
    int arr[] = {5, 8, 2, 10, 15, 3, 5, 10};

    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize a variable to count duplicate elements.
    int duplicateCount = 0;

    // Loop through the array to find duplicate elements.
    for (int i = 0; i < n - 1; i++) {
        // Check if the current element is a duplicate.
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++; // Increment the duplicate count.
                break; // No need to check further for this element.
            }
        }
    }

    // Print the total count of duplicate elements.
    std::cout << "Total number of duplicate elements in the array: " << duplicateCount << std::endl;

    return 0; // Exit successfully.
}
