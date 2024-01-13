#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, real_part, imaginary_part;

    printf("Enter coefficients a, b, and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\nRoot 1 = %.2lf\nRoot 2 = %.2lf\n", root1, root2);

    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and same.\nRoot 1 = Root 2 = %.2lf\n", root1);
    }
    else {
        real_part = -b / (2 * a);
        imaginary_part = sqrt(-discriminant) / (2 * a);//disc. is already negative.so, to get a real coeffitient we multiplied it by (-)
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", real_part, imaginary_part);
        printf("Root 2 = %.2lf - %.2lfi\n", real_part, imaginary_part);
    }

    return 0;
}
