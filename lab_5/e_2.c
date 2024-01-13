//Example 2: A C Program to demonstrate the use of break statement.

#include <stdio.h>
void main ()
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 0; i < 50; i++)
    {
        printf("%d ", i);
        if(i == num)
            break;
    }
    printf("came outside of loop i = %d",i);
}
