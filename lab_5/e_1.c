//Example 1: A C Program to find the reverse of a number.


#include <stdio.h>
int main()
{
    long long num, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%lld", &num);
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number = %d", rev);
    return 0;
}
