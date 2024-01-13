//Write a C program to calculate sum of digits of any number.

#include <stdio.h>
int main()
{
    long long num;

    int sum = 0;
    printf("Enter a number: ");
    scanf("%lld",&num);

    if (num < 0)
    {
    num = -num;
    }
    while (num > 0) //there was a logical error while using >= operator that created an infinite loop.
    {
        sum += (num % 10);
        num /= 10;
    }

    printf("sum = %d", sum);
    return 0;
}
