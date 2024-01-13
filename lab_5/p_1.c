/*Write a C program to enter any number and check whether the number is
palindrome or not.*/

#include <stdio.h>
int main()
{
    int num, original_num, rev = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    original_num = num;
    while (num != 0)
    {
        remainder = num % 10;
        rev = rev * 10 + remainder;
        num /= 10;
    }
    printf("Reversed number is %d", rev);
    /*if (num == rev)
    {
        printf(" and it's a palindrome number.\n");
    } this is never executable because after executing the wile loop the number has became 0 */

    if (rev == original_num)
    {
        printf(" and it's a palindrome number.\n");
    }
    return 0;

}
