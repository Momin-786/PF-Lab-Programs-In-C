#include <stdio.h>

void reverse(int number);

int main() {
    int n;
	 printf("Enter a number: ");
    scanf("%d", &n);
	reverse(n);   
}
 
void reverse(int number) {
    static int reversed = 0;

    if (number != 0)
	 {
        reversed = reversed * 10 + (number % 10);
        reverse(number / 10);
    }
else 
	printf("%d ",reversed);
}
