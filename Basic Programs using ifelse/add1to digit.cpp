#include <stdio.h>

int main() {
    int num, new_num = 0, place = 1;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);

    // Iterate over each digit of the number
    while(num > 0) {
        // Extract the rightmost digit
        int digit = num % 10;
   // Add 1 to the digit
        digit++;
   // If the digit becomes 10, wrap around to 0
        if(digit == 10) {
            digit = 0;
        }

        // Add the modified digit to the new number
        new_num += digit * place;
    // Move to the next digit and increase the place value
        num /= 10;
        place *= 10;
    }
    printf("The new number is: %d\n", new_num);
}
