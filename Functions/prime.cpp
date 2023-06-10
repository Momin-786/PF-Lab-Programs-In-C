#include<stdio.h>
int prime(int num)
{
	if(num<=1)
	{
		return 0;
	}
	for(int i=2 ; i<=num/2;i++)
	{
		if(num%i==0)
		{
			return 0;
		}
		
	}
     return 1;
}
int main()
{
	int n;
	printf("number:");
	scanf("%d",&n);
	int p=prime(n);
	if(p==1)
	{
		printf(" prime");
		
	}
	else printf(" not prime");
}