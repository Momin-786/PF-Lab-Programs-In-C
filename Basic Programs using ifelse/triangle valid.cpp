#include<stdio.h>
int main()
{
	int side1;
	int side2;
	int sidelarge;
	printf("Enter largest side of triangle: ");
	scanf("%d",&sidelarge);
	printf("Enter side 1 of triangle: ");
	scanf("%d",&side1);
	printf("Enter side 2 of triangle: ");
	scanf("%d",&side2);
		if(side1+side2>sidelarge)
		{
			printf("Your Triangle is valid");
		}
	else {
		printf("Triangle is invalid");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}