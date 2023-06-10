#include <stdio.h>

int main() {
    int decimalNum, binaryNum = 0, count = 1, remainder;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    
    while (decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * count;
        count *= 10;
    }
    
    printf("Binary number: %d", binaryNum);
    
    return 0;
}                                                              
