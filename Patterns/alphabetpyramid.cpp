#include <stdio.h>

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= rows-i; j++) {
            printf("  ");
        }
        char alphabet = 'A';
        for(int k = 1; k <= i; k++) {
            printf("%c ", alphabet++);
        }
        for(int k = i-1; k >= 1; k--) {
            printf("%c ", alphabet-2);
            alphabet--;
        }
        printf("\n");
    }

    return 0;
}
