#include <stdio.h>

void printNumberInWords(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printNumberInWords(number);

    return 0;
}

void printNumberInWords(int number) {
    if (number == 0) {
        printf("zero\n");
        return;
    }

    if (number < 0) {
        printf("minus ");
        number = -number;
    }

    int powers[] = { 1000000000, 1000000, 1000, 100 };
    char* powerWords[] = { "billion", "million", "thousand", "hundred" };

    for (int i = 0; i < 4; i++) {
        if (number >= powers[i]) {
            printNumberInWords(number / powers[i]);
            printf("%s ", powerWords[i]);
            number %= powers[i];
        }
    }

    if (number >= 20) {
        int tens = number / 10;
        switch (tens) {
            case 2: printf("twenty "); break;
            case 3: printf("thirty "); break;
            case 4: printf("forty "); break;
            case 5: printf("fifty "); break;
            case 6: printf("sixty "); break;
            case 7: printf("seventy "); break;
            case 8: printf("eighty "); break;
            case 9: printf("ninety "); break;
        }
        number %= 10;
    }

    if (number > 0) {
        char* ones[] = { "", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                         "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                         "seventeen", "eighteen", "nineteen" };
        printf("%s ", ones[number]);
    }
    
    printf("\n");
}
