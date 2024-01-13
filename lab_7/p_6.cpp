#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

int main() {
    int size;

    // Prompt the user to enter the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Check if the array size is non-positive
    if (size <= 0 || size > MAX_SIZE) {
       cerr << "Array size must be a positive integer and less than or equal to " << MAX_SIZE << "." << endl;
        return 1; // Exit with an error code
    }

    // Declare an array of integers with the given size
    int arr[MAX_SIZE];

    // Prompt the user to enter elements for the array
    cout << "Enter elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Declare an array to store the frequency of each element
    int frequency[MAX_SIZE] = {0}; // Initialize all elements to 0

    // Count the frequency of each element and store it in the frequency array
    for (int i = 0; i < size; i++) {
        frequency[arr[i]]++;
    }

    // Display the frequency of each element
    cout << "Frequency of each element:" << endl;
    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] > 0) {
            cout << "Element " << i << ": " << frequency[i] << " times" << endl;
        }
    }

    return 0; // Exit the program with success
}
