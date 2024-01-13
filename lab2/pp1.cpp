#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three number: \n");
    scanf("%d%d%d", &num1, &num2, &num3);

    if (num1>num2 && num1>num3) {
    printf("First one is the greatest.\n");
    }

    else if (num2>num1 && num2>num3){
    printf("Second one is the greatest.\n");
    }

    else {printf("Third one is the greatest.\n");
    }
    return 0;
}
