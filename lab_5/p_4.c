//4. Write a C program to check whether a number is Prime number or not.

#include <stdio.h>

int main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("It's NOT a prime number.\n");
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("It's NOT a prime number.\n");
            break;
        }
    }

    if (i == num) {
        printf("It's a prime number.\n");
    }

    return 0;
}
