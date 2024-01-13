//4. Write a C program to copy all elements from an array to another array.


#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int A[n], B[n];

    printf("Enter %d elements for the first array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < n; i++) {
        B[i] = A[i];
    }

    printf("Copied array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
