//12. Write a C program to check whether an alphabet is vowel or consonant
//using switch case.

#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (isalpha(ch))
    {
        ch = tolower(ch);

        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            printf("%c is a consonant.\n", ch);//before adding if else there was e functional error which was showing a number as a consonant
        }
    }
    else
    {
        printf("Input is not an alphabet character.\n");
    }

    return 0;
}
