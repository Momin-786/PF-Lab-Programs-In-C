#include<stdio.h>
int main()
{
int num;
int flag=1;
int count=2;
scanf("%d",&num);
while(count<num)
	{
		if(num%count==0)
		{
			flag=0;
			 break;
		}
		count++;
	}
	if(flag)
	{
		printf("It is prime number");
	}
	else {
		printf("It is not prime");
	}
	
	
	
	
	
}