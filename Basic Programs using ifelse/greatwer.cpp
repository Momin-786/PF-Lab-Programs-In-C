#include<stdio.h>
int main()
{
	int num1;
	int num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	if(num1>num2)
	{
		printf("%d is larger than %d ",num1,num2);
	}
	else{
		printf("%d is larger than %d",num2,num1);
	}}