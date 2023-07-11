#include<stdio.h>
int sumdig(int num);
int main()

{
	int n;
	int sum;
	printf("Enter Numbers: ");
	scanf("%d",&n);
	sum=sumdig(n);
	printf("Sum is %d",sum);
}
int sumdig(int num)
{
	if(num<10)
	return num;
	else
	return num%10 + sumdig(num/10);
}