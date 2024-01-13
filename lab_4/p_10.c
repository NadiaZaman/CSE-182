//Write a C program to enter any number and calculate its factorial.

#include <stdio.h>
int main()
{
    int num, i;
    long long factorial = 1; //initializing factorial by 0.
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        factorial *= i;
    }
    printf(" %d! is equal to %lld", num, factorial);
    return 0;
}
