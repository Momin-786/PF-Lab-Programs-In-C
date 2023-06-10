#include<stdio.h>
int main()
{
int fac=1;
int num;
printf("Enter number: ");
scanf("%d",&num);
int count=1;
while(count<=num)
	{
		fac=fac*count;
		count++;
		}	
printf("%d is factorial",fac);
}