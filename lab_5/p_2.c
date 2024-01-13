//2. Write a C program to find HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    //When numbers that were not validated to be positive integers were used, unexpected behavior or incorrect results were encountered for negative inputs given by the user.
        if (num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\n");
        return 1;
    }

    int min = (num1 < num2) ? num1 : num2;
    int hcf = 1;

    for (int i = 1; i <= min; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("The HCF of %d and %d is %d.\n", num1, num2, hcf);

    return 0;
}
