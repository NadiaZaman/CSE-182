#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three sides of a triangle: \n");
    scanf("%d%d%d", &a, &b, &c);
    if ((a+b)>c && (b+c)>a && (a+c)>b) {
        if (a==b==c) {
        printf("It's a Equilateral. \n");
        }
        else if ((a==b) || (a==c) || (b==c)){
        printf("It's a Isosceles. \n");
        }
        else {
        printf("It's a Scalene. \n");
        }
    }
    else {
    printf("The triangle is INVALID!!!");
    }
     return 0;
}
