#include<stdio.h>
int main()
{
	int count=1;
	int num;
	int sum=0;
	float avg;
	int lar;
	int small;
	printf("Enter number: ");
	while(count<=10)
	{
		scanf("%d",&num);
		sum=sum+num;
		
		if(count==1)
		{
			lar=num;
			small=num;
			
		}
		if(num>lar)
			lar=num;
		
		if(num<small)
			small=num;
			
		count++;
	}
	printf("Sum of number is %d\n",sum);
	printf("%d is largest\n",lar);
	printf("%d is smallest\n ",small);
	avg=sum/10.0;
	printf("Average is %f ",avg);	
}