#include<stdio.h>

void number(int x);

void number(int x)
{
	if(x>=1)
	{
		 number(x-1);
		 printf("%d\n",x);
	}

}
int main()
{
	int num;
	printf("Enter Number");
	scanf("%d",&num);
	number(num);
}
