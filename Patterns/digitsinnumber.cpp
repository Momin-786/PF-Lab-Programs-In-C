#include <stdio.h>

int main() {
    int num, digit, count;
    printf("Enter a number: ");
    scanf("%d", &num);
    
   
    for(int i = 0; i <= 9; i++) {
        digit = i;
        count = 0;
        int temp = num;
    
        while(temp > 0) {
            if(temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }
       
        if(count > 0) {
            printf("%d = %d times\n", digit, count);
        }
    }

    return 0;
}
