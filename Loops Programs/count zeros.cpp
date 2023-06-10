#include <stdio.h>

int main() {
    int num, digit, rev = 0;

    char* ones[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char* tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("zero");
        return 0;
    }

    if (num < 0) {
        printf("minus ");
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    while (rev > 0) {
        digit = rev % 10;

        if (rev >= 10 && rev <= 19) {
            printf("%s ", ones[digit]);
            break;
        }
        else if (rev >= 20 && rev <= 99) {
            printf("%s ", tens[digit]);
        }
        else if (rev >= 100 && rev <= 999) {
            printf("%s hundred ", ones[digit]);
        }
        else if (rev >= 1000 && rev <= 999999) {
            printf("%s thousand ", ones[digit]);
        }
        else if (rev >= 1000000 && rev <= 999999999) {
            printf("%s million ", ones[digit]);
        }

        rev /= 10;
    }

    return 0;
}
