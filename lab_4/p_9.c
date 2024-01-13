//Write a C program to enter any number and print all factors of the number.

#include <stdio.h>
int main()
{
    long num, i = 1, f;
    printf("Enter a number: ");
    scanf("%ld", &num);
    if (num <= 0)
    {
        printf("Error: Please enter a positive integer.\n");
    }
    else
    {
        printf("Factors of %d are: ", num);
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                printf("%d ", i);
            }
        }
    }

    return 0;

}
