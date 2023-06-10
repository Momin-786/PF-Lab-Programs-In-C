#include<stdio.h>
int cal_fact(int num)
{	int fact=1;
	for(int i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	return fact;
}
int cal_fact(int num);
int main()
{
	int n;

	printf("Enter number:");
	scanf("%d",&n);
int res=	cal_fact(n);
	printf("factoral  is %d",res);
	
	}	
