#include<stdio.h>
int main()
{
	int num;
	printf("Enter five digit number:");
	scanf("%d",&num);

	int digit1=num%10;
	num=num/10;
	
	int digit2=num%10;
	num=num/10;
	
	int digit3=num%10;
	num=num/10;
	
	int digit4=num%10;
	num=num/10;
	int sum=num+digit1+digit2+digit3+digit4;
	printf("%d",sum);
	
	
	}