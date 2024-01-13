#include <stdio.h>

int main()
{
    float num;
    printf("Enter a number: \n");
    scanf("%d", &num); //err- assigning integer and reading float.

    if (num>0) {
    printf("Given number is positive.\n");
    }

    else if (num<0){
    printf("Given number is negative.\n");
    }

    else {printf("Given number is Zero.\n");
    }
    return 0;
}
