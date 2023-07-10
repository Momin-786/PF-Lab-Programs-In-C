#include <stdio.h>
int evaluateExpression(char expression[]) {
    int result = 0;
    int num = 0;
    char sign = '+';

    for (int i = 0; expression[i] != '\0'; i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            num = num * 10 + (expression[i] - '0');
        }

        if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/' || expression[i] == '\0') {
            if (sign == '+') {
                result += num;
            } else if (sign == '-') {
                result -= num;
            } else if (sign == '*') {
                result *= num;
            } else if (sign == '/') {
                result /= num;
            }

            num = 0;
            sign = expression[i];
        }
    }

    return result;
}

int main() {
    char expression[100];

    printf("Enter an expression: ");
    fgets(expression, 100, stdin);

    // Removing the trailing newline character from the input
    if (expression[strlen(expression) - 1] == '\n') {
        expression[strlen(expression) - 1] = '\0';
    }

    int result = evaluateExpression(expression);

    printf("Result: %d\n", result);

    return 0;
}
