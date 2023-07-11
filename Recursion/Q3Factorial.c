#include<stdio.h>
int fact(int x);
int main()
{
	int num;
	int f;
	printf("Enter Number");
	scanf("%d",&num);
	f=fact(num);
	printf("%d",f);
}
int fact(int x)
{
	if(x>1)
	return (x*fact(x-1));
	else 
	return x;
}