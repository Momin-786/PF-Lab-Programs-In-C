#include<stdio.h>
int isperfect(int num)
{
	int sum=0;
	for (int i=1 ; i<num ; i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		} 
	}
	return (sum==num);
}
void range_perfect(int lower,int upper)
{
	for(int i = lower ; i<=upper ; i++)
	{
		if(isperfect(i))
		{
			printf("%d is perfect \n",i);
		}
	}
	
}
int main()
{
	int lowerlimit;
	int upperlimit;
	printf("Enter lower limit:");
	scanf("%d",&lowerlimit);
	printf("Enter upper limit:");
	scanf("%d",&upperlimit);
	range_perfect(lowerlimit,upperlimit);
}