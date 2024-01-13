//Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
    sum += i;
    }
    printf("sum = %d", sum);
    return 0;
    }
