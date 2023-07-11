#include <stdio.h>

void convertDigits(int arr[][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] % 2 == 0) {
                arr[i][j]++;
            } else {
                arr[i][j]--;
            }
        }
    }
}

int main() {
    int arr[3][3] = {
        {2, 3, 4},
        {5, 6, 7},
        {8, 9, 10}
    };

    printf("Original Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    convertDigits(arr);

    printf("\nModified Array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
