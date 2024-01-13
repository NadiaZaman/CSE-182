//Example 4: A C Program to demonstrate the use of switch statement.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("Case-A");
        break;
    case 'B':
        printf("Case-B");
        break;
    case 'C':
        printf("Case-C ");
        break;
    default:
        printf("Default ");
    }
    return 0;
}
