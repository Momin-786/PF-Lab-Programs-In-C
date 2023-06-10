#include<stdio.h>
int main()
{
int num;
int count=1;
printf("Enter number:");
scanf("%d",&num);
while(count<=num)
	{
		if(num%count==0)
	{
		printf("%d is divisor\n",count);
	}
	count++;	
	}

}