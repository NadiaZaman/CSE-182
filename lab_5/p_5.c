//5. Write a C program to print all Prime numbers between 1 to n.

#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are: ", n);
    for (int factor = 2; factor <= n; factor++) {
        int isPrime = 1;

        for (int i = 2; i * i <= factor; i++) {
            if (factor % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", factor);
        }
    }

    return 0;
}
