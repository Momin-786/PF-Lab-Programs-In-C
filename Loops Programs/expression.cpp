#include <stdio.h>

int main() {
    float result, num;
    char op;

    printf("Enter an expression: ");
    scanf("%f", &result);

    while ((op = getchar()) != '=') {
        scanf("%f", &num);

        switch(op) {
            case '+':
                result += num;
                break;
            case '-':
                result -= num;
                break;
            case '*':
                result *= num;
                break;
            case '/':
                result /= num;
                break;
            default:
                printf("Invalid operator\n");
                return 1;
        }
    }

    printf("Result: %.2f\n", result);
    return 0;
}
