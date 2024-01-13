//Write a C program to enter any number and print its reverse.

#include <stdio.h>
int main()
{
    long long num;
    int rev = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);
    while (num > 0)
    {
        rev = num % 10;
        num = num / 10;
        printf("%d", rev);
    }
    return 0;
}
