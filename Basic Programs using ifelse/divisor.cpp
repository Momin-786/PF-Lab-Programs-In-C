#include<stdio.h>
int main()
{
	int num1;
	int num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	
		printf("Enter second number: ");
	scanf("%d",&num2);
	
	if(num2%num1==0)
	{
		printf("%d is divisor Of %d",num1,num2);
	}
	else {
	
	printf("Not a divisor");}
	
	
	
	
}