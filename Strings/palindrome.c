#include<stdio.h>
void decimalToBinary(int decimal) 
{
    int binary[32];  
    int index = 0;   

    while (decimal > 0) 
    {
        binary[index] = decimal % 2;
        decimal = decimal / 2;
        index++;
    }
    printf("Binary: ");
    for(int i = index - 1;i >= 0;i--) 
    {
        printf("%d", binary[i]);
    }
    printf("\n");
}

int isPalindrome(int number)
 {
    int binary[32];
    int index = 0;

    while (number > 0) {
        binary[index] = number % 2;
        number = number / 2;
        index++;
    }

    for (int i = 0, j = index - 1; i <= j; i++, j--) {
        if (binary[i] != binary[j]) {
            return 0;
        }
    }

    return 1;
}
int main()
{
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    decimalToBinary(decimal);
   int palindrome= isPalindrome(decimal);
    if(palindrome==1)
    {
        printf("The Binary is palindrome\n");
    }
    else
    {
        printf("The Binary is not palindrome\n");
    }
}