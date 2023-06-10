#include<stdio.h>
int main()
{
	int num; int newnum=0;	int place=1;
	printf("Plz enetr number of Five digits: ");
	scanf("%d",&num);
	while(num>0)
	{
		int digit=num%10;
		digit++;
		if(digit==10)
		{
			digit=0;
		}
	

 newnum=newnum+digit*place;
		num=num/10;
			place=place*10;
		
		
	}
	
	printf("%d",newnum);
	
	
	
	
	
	
	
	
	
	
	
}