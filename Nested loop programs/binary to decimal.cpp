#include <stdio.h>

int main() {
    int binaryNum, decimalNum = 0, base = 1, remainder;
    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);
    while (binaryNum != 0) {
        remainder = binaryNum % 10;
        decimalNum += remainder * base;
        base *= 2;
        binaryNum /= 10;
    }
    printf("Decimal equivalent: %d", decimalNum);
    return 0;
}
