#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num%2 == 0) {
    printf("Given number is an even integer.\n");
    }
    else {
    printf("Given number is an odd integer.\n");
    }
    return 0;
}
