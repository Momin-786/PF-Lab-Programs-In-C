#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	int count=0;
	int arms=0;
	printf("Enter number:");
	scanf("%d",&num);
	int temp1=num;
	int temp2=num;
	while(temp1!=0)
	{
		temp1/=10;
		count++;
	}
	while(temp2!=0)
	{
		int rem=temp2%10;
		arms+=pow(rem,count);
		temp2/=10;
	}
	if(arms==num)
	{
		printf("It is armstrong");
		
	}
	else printf("It is not armstrong");
}