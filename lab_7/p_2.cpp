#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 8, 2, 10, 15, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        cout << "There is no second largest element in the array." << endl;
        return 1;
    }

    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second largest element in the array: " << secondLargest << endl;

    return 0;
}
