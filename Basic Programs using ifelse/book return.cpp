#include<stdio.h>
int main()
{
	int time;
	printf("Enter your time taken: ");
	scanf("%d",&time);
	if(time>=1 && time<6)
	{
		printf("Your fine is 50 paisa");
	}
	
	if(time>=6 && time<10)
	{
		printf("Your fine is 1 rupee");
		
	}
		if(time>=10 && time<=30)
	{
		printf("Your fine is 5 rupees");
	}
		if(time>30)
	{
		printf("your membership will be cancelled");
	}
	return 0;
}