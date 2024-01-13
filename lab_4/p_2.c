//Write a C program to print all alphabets from a to z.-using while loop.

#include <stdio.h>
int main()
{
    char l = 'a';
    printf("Alphabets in lowercase a to z: \n");
    while (l <= 'z')
    {
        printf("%c ", l);
        l++;
    }
    return 0;
}
