//3. Write a C program to find LCM of two numbers.

#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

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
   int lcm = (num1*num2)/hcf;

    printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);

}
