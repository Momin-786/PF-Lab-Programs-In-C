#include<stdio.h>
int main()
{
	int work;
	printf("Enter your time taken: ");
	scanf("%d",&work);
	if(work>=2 && work<3)
	{
		printf("You are highly Efficient");
	}
	
	if(work>=3 && work<4)
	{
		printf("You need to improve speed");
	}
	
	if(work>=4 && work<5)
	{
		printf("You aregiven training to improve speed");
		
	}
	if(work>=5)
	{
		printf("You have to leave company");
	}
	return 0;
	
	
	
	
	
	
	
	
	
	
}