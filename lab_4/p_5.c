//Write a C program to count number of digits in any number.

#include <stdio.h>
int main()
{
    long long num;
    int i = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num < 0)
    {
        num = -num;
    }
    if (num == 0)
    {
        i = 1;
    }
    while (num > 0)
    {
        i++;
        num /= 10;
    }
    printf("Nmber of digits: %d", i);
    return 0;
}
