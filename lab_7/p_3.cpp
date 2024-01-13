#include <iostream>
using namespace std;

int main() {
    // Define an integer array with some sample values.
    int arr[] = {5, 8, 2, 10, 15, 3};

    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize variables to count even and odd numbers.
    int evenCount = 0; // Initialize the count of even numbers to 0.
    int oddCount = 0;  // Initialize the count of odd numbers to 0.

    // Iterate through the array to count even and odd numbers.
    for (int i = 0; i < n; i++) {
        // Check if the current element is even.
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment the count of even numbers.
        } else {
            oddCount++;  // Increment the count of odd numbers.
        }
    }

    // Print the counts of even and odd numbers.
    cout << "Total even elements in the array: " << evenCount << endl;
    cout << "Total odd elements in the array: " << oddCount << endl;

    return 0; // Exit successfully.
}
