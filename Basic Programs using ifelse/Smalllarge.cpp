#include<stdio.h>
int main()
{
	int num1;
	int num2;
	int num3;
	printf("Enter first number: ");
	scanf("%d",&num1);
	
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	printf("Enter third number: ");
	scanf("%d",&num3);
	if(num1>num2)
	{
		if (num1>num3)
		printf("%d is greater\n",num1);
		}
	else if(num2>num3)
	{
		printf("%d is largest\n",num2);
	}
	else if(num2> num1 && num3)
{
	printf("%d is largest\n",num3);
}

	if(num1<num2)
	{
		if (num1<num3)
		printf("%d is smallest",num1);
		}
	else if(num2<num3)
	{
		printf("%d is smallest",num2);
	}
	else if (num3< num1 && num2)
{
	printf("%d is smallest",num3);
}
	}