#include <stdio.h>
#include <math.h>

int main() {
   
    for (int i = 1; i <= 9; i++) {
        
        printf("%d\t", i);

        for (int j = 1; j <= 3; j++) {
            printf("%d\t", i * (int)pow(10, j));
        }

        printf("\n");
    }

    return 0;
}
