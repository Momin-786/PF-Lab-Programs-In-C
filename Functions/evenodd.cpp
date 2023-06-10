#include<stdio.h>
int even_odd(int num){
	if(num%2==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n;
	printf("enter number:");
	scanf("%d",&n);
	int res=even_odd(n);
	if(res==0)
	{
		printf("Even number");
		
	}
	else printf("Odd number");
}