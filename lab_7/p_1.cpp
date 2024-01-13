#include <iostream>
using namespace std;

int main()
{
    // Define an integer array with some sample values.
    int arr[] = {5, 8, 2, 10, 15, 3};

    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Check if the array is empty.
    if (n == 0)
    {
        cout << "The array is empty." << endl;
        return 1; // Exit with an error code.
    }

    // Initialize variables to store the maximum and minimum elements.
    int max = arr[0]; // Assume the first element is the maximum.
    int min = arr[0]; // Assume the first element is the minimum.

    // Iterate through the array to find the maximum and minimum elements.
    for (int i = 1; i < n; i++)
    {
        // Check if the current element is greater than the current maximum.
        if (arr[i] > max)
        {
            max = arr[i]; // Update the maximum element.
        }

        // Check if the current element is smaller than the current minimum.
        if (arr[i] < min)
        {
            min = arr[i]; // Update the minimum element.
        }
    }

    // Print the maximum and minimum elements found in the array.
    cout << "Maximum element in the array: " << max << endl;
    cout << "Minimum element in the array: " << min << endl;

    return 0; // Exit successfully.
}
