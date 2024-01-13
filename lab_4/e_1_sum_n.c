//Write a C Program to calculate the sum of first n natural numbers.

#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
    sum += i;
    }
    printf("%d\n", sum);
    return 0;
    }
