//13. Write a C program to create Simple Calculator using switch case.

#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    scanf("%lf%c%lf", &num1, &operator, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 'x':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
