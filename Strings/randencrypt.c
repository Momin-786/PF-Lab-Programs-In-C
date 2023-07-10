#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char str[100];
    printf("Enetr message to encrypt: ");
    gets(str);
    srand(time(0));
    int shift = rand() % 10;
    printf("Shift: %d\n", shift);
    int location = rand() % 2;
    printf("Location: %d\n", location);
    encryptstring(str,shift,location);
    printf("Encrypted message: %s\n", str);
    
}
void encryptstring(char str[],int shift , int location)
{
    int length=strlength(str);
        if (location== 0)
         {  printf("Encryption from left to right\n");
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = (str[i] - 'a' - shift + 26) % 26 + 'a';
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = (str[i] - 'A' - shift + 26) % 26 + 'A';
            }
        }
    } else
     {  printf("Encryption from right to left\n");
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') 
            {
                str[i] = (str[i] - 'a' + shift) % 26 + 'a';
            } else if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = (str[i] - 'A' + shift) % 26 + 'A';
            }
        }
    }
}
int strlength(char str[])
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}