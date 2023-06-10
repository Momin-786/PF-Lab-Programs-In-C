#include <stdio.h>

int main()
 {
    int numRows = 3;
    int i, j;

    for (i = 0; i < numRows + 1; i++) {
        if (i == numRows) {
            printf("*********\n");
        } else {
            printf("*********\n0*0*0*0*0\n");
        }
    }

    return 0;
}
