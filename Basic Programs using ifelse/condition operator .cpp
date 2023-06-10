#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of three sides of a triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1) {
        printf("The triangle is isosceles.\n");
    }
    else {
        printf("The triangle is scalene.\n");
    }

    return 0;
}

