#include<stdio.h>
int main()
{
	int num;
	printf("Enter five digit number:");
	scanf("%d",&num);
int	sum;
 while(num>0)
{
	int digit=num%10;
	num=num/10;
sum=digit+sum;
	
}
printf("%d",sum);	
	
	}