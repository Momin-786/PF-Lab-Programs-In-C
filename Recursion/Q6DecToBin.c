#include <stdio.h>

void dtb(int decimal);

int main() 
{
    int decimal;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    printf("Binary is: ");
    dtb(decimal);
	
}
void dtb(int decimal) 
{
    if (decimal > 0) {
       dtb(decimal / 2);
        printf(" %d", decimal % 2);
    }
}

