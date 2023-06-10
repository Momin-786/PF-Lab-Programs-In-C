#include<stdio.h>
int main()
{
	int num;
	printf("Enetr a number:");
	scanf("%d",&num);
	int count=1;
	int snum;
	printf("Enter limit of factors: ");
	scanf("%d",&snum);
	while(count<=snum)
	{
		
		printf("%d\n",count*num);
		count++;
	}
	
}