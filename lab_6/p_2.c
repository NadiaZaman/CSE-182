#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    printf("Negative elements in the array:\n");
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            printf("%d\n", A[i]);
        }
    }

    return 0;
}
