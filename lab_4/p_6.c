//Write a C program to find first and last digit of any number.

#include <stdio.h>
int main()
{
    long long num;
    int f_digit, l_digit;
    printf("Enter a number: ");
    scanf("%lld", &num);
    if (num < 0)
    {
        num = -num;
    }
    f_digit = num;
    while (f_digit >= 10)
    {
        f_digit = f_digit / 10;

    }
    l_digit = num % 10;
    printf("First digit is %d\n", f_digit);
    printf("last digiit is %d\n",l_digit);
    return 0;
}
