//6. Write a C program to find sum of all prime numbers between 1 to n.

#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int factor = 2; factor <= n; factor++) {
        int isPrime = 1;

        for (int i = 2; i * i <= factor; i++) {
            if (factor % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            sum = sum + factor;
        }
    }
    printf("Sum of the prime numbers is %d", sum);

    return 0;
}
