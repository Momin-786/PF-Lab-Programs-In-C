#include <stdio.h>

int gcd(int num1, int num2);

int main()
 {
    int num1, num2, result;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = gcd(num1, num2);

    printf("GCD of %d & %d is %d", num1, num2, result);

}
int gcd(int num1, int num2)
 {
    if (num2 != 0) {
        return gcd(num2, num1 % num2);
    } else 
        return num1;
    
}
