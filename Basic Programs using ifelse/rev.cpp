#include<stdio.h>
int main()
{
	int num;
	int rev=0;
	printf("Enter five digit num: ");
	scanf("%d",&num);
	while(num>0)
	{
		int digit=num%10;
		num=num/10;
		rev=rev*10+digit;
		
		
		
	}
	printf("%d",rev);
	
	
	
	
	
	
	
	
	
	
}