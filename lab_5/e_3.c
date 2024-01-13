//Example 3: A C Program to demonstrate the use of continue statement.

#include<stdio.h>
void main()
{
    int i, num, factor;
    printf("Enter a number: ");
    scanf("%d%d", &num, &factor);
    for(i=1; i<=num; ++i)
    {
        if(i % factor == 0)
        {
            printf("pass\n");
            continue;
        }
        printf("%d\n",i);
    }
}
