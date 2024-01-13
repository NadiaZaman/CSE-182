//8. Write a C program to check whether a number is Strong number or not.

#include <stdio.h>

int main() {
    int num, originalNum, digit, i, factorial, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;
    sum = 0;

    while (num > 0) {
        digit = num % 10;
        factorial = 1;
        for (i = 1; i <= digit; i++) {
            factorial *= i;
        }
        sum += factorial;
        num /= 10;
    }

    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }

    return 0;
}
