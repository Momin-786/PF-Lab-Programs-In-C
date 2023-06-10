#include<stdio.h>
int main()
{
	int num;
	int newnum=0;
	printf("Enter four digit num: ");
	scanf("%d",&num);
int lastdig=num/1000;
int fdigit=num%10;
	 newnum=fdigit+lastdig;
	printf("%d + %d = %d",fdigit,lastdig,newnum);
	
	
	
	
	
	
	
	
	
}