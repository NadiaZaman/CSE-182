/*Write a C program to print all natural numbers in reverse (from n to 1). -
using while loop*/

#include <stdio.h>
int main()
{
    int i;
    printf("Enter a number: ");
    scanf("%d", &i);
    do
    {
        printf("%d ", i);
        --i;
    }
    while (i > 0); //setting the condition i<1 and reasonabblly the loop executes only one time..in do while the condition terminates wit semicolon
    printf("\n");
    return 0;
}
