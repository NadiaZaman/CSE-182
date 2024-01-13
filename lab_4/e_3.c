//Write a C Program to add numbers until the user enters zero .

#include <stdio.h>
int main()
{
    double num, sum = 0.0;

    do
    {
        printf("Enter a number: ");
        scanf("%lf", &num);
        sum += num;
    }
    while (num != 0.0);
    printf("Summation = %lf", sum);
    return 0;
}
