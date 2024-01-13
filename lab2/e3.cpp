#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter two integers: \n");
    scanf("%d %d", &num1, &num2);

    if(num1 == num2) {
    printf("Given two numbers are equal.\n");
    }

    else if (num1 > num2) {
    printf("%d is greater than %d", num1, num2);
    }

    else {
    printf("%d is less than %d",num1, num2);
    }
    return 0;
}
