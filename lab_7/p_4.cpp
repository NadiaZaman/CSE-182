#include <iostream>
using namespace std;


int main() {
    // Define an integer array with some sample values that may contain duplicates.
    int arr[] = {5, 8, 2, 10, 15, 3, 5, 10};

    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Loop through the array to find and print unique elements.
    for (int i = 0; i < n; i++) {
        bool isUnique = true; // Assume the current element is unique.

        // Check if the current element is equal to any of the previous elements.
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                isUnique = false; // If it's equal, it's not unique.
                break; // No need to check further.
            }
        }

        // If the current element is unique, print it.
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }

    cout << endl; // Print a newline after the unique elements.

    return 0; // Exit successfully.
}
