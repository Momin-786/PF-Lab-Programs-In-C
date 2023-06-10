#include<stdio.h>
int main()
{
    int n,rev=0,temporary;
    printf("Enter number: ");
    scanf("%d",&n);
    temporary=n;
    while(n!=0)
    {
       int  rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temporary==rev)
        printf("Palindrome");
    else
        printf("Not a Palindrome");
   
}