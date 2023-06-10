#include<stdio.h>
int main()
{
	int num; int newnum=0;
	printf("Enter five digit number");
	scanf("%d",&num);
	while(num>0)
	{
		int digit=num%10;
		num=num/10;
		newnum=newnum+digit;
		
		
		
		
		
		
	}
	
	printf("%d",newnum);
	
	
	
	
	
	
	
	
	
	
	
	
	
}