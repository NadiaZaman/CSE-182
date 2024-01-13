#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);

    if (num%5==0 && num%11==0) {
    printf("Given number is divisible by 5 and 11.\n");
    }

    else if (num%5==0 || num%11==0){printf("Not divisible by both of them.\n");
    }
     else {
     printf("Not divisible by any of them.\n");
     }
    return 0;
}
