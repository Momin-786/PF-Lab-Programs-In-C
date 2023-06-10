#include<stdio.h>
int main()
{
	int limit;
	int count=0;
	int first=0;
	int sec=1;
	int next;
	printf("Enter limit of febinicco");
	scanf("%d",&limit);
	while(count<=limit)
	{
		if(count==0)
		printf("%d\n",first);
		if(count==1)
		printf("%d\n",sec);
		
		next=first+sec;
		first=sec;
		sec=next;
		printf("%d\n",next);
		count++;
	}
	
	
	
	
	
	
}