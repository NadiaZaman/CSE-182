#include<stdio.h>

int main( )
{
    int a, b, c, d;
    float ratio;
    printf("Enter four integer: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (c-d != 0){
    ratio = (a+b)/(c-d);
    printf("The ratio is %0.3f\n", ratio);
    } //err- there is no need to put semicolon after terminating braces in if statement.
    return 0;
}
