#include<stdio.h>
float add(float num1 , float num2)
{
	return num1+num2;
}
float sub(float num1 , float num2)
{
	return num1-num2;
}
float div(float num1 , float num2)
{
	return num1/num2;
}
float mult(float num1,float num2)
{
	return num1*num2;
}
float rem(float num1 , float num2)
{
	return (int)num1 % (int)num2;
}
float performOperation(float n1, char opera , float n2)
{
	switch(opera)
	{
		case '+':
			return add(n1,n2);
			
		case '-':
			return sub(n1,n2);
			
		case '*':
			return mult(n1,n2);
			
		case '%':
			
			if(n2==0)
			{
				return n1;
			}
			else
			return rem(n1,n2);
			
		
		case '/':
				return div(n1,n2);
	
		default:
		{
			printf("Invalid operator \n");
			}	
}
}
int main()
{
	float num1;
	char op;
	float num2;
	printf("Enter first number:");
	scanf("%f",&num1);
	printf("Enter Operator:");
	scanf(" %c",&op);
	printf("Enter second number:");
	scanf("%f",&num2);
	float res;
	res=performOperation(num1, op , num2);
	if(op=='/' && num2==0)
	{
		printf("Undefined");
	} else 
	printf("Result = %.2f \n",res);
}