#include<stdio.h>
#include<math.h>
int main()
{
	int first;
	int last;
	printf("Enter starting point:");
	scanf("%d",&first);
	printf("Enter ending point:");
	scanf("%d",&last);
	while(first<=last)
	{
	int num=first;
	int arms=0;
	int count=0;
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
	printf("%d\n",num);
	first++;
		
	}

	
}