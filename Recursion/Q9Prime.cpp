#include <stdio.h>
int primeno(int , int );
int main()
{
    int num, div;
    printf("Enter a number: ");
    scanf("%d", &num);
    div = primeno(num, num / 2);
    if (div == 1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }
}
int primeno(int num, int i)
{
    if (i == 1)
    {
        return 1;
     }
    else
    {
       if (num % i == 0)
       {
         return 0;
       }
       else
       {
         return primeno(num, i - 1);
       }       
    }
}