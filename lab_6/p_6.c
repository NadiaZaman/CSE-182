#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int A[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += A[i];
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}
