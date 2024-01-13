#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a+b)>c && (b+c)>a && (a+c)>b) {
    printf("The triangle is valid.\n");
    }               //err-using logical 'or' instead of logical 'and'
    else {
    printf("The triangle is INVALID!!");
    }
    return 0;
}
