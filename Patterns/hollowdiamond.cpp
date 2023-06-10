#include <stdio.h>

int main() {
    int numRows;
    printf("Enter rows: ");
    scanf("%d", &numRows);

    int empty = numRows / 2 + 1;
    
    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= numRows; j++) {
            if (j == empty || j == numRows - empty + 1)
                printf("*");
            else
                printf(" ");
        }
        
       if (i <= numRows / 2) {
            empty--;
        } else {
            empty++;
        }
        
        printf("\n");
    }
    
}
