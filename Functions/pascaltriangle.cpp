#include<stdio.h>
int fact(int num)
{
	int res=1;
	for(int i = 1 ; i<=num ; i++)
	{
		res=res*i;
	}
	return res;
}
void pascal(int no)
{
	for(int n =0 ; n< no;n++)
	{
		for(int space= 1; space<no-n; space++)
		{
			printf("  ");
		}	
		for(int k=0 ; k<=n; k++)
		{
			int value=fact(n)/(fact(k)* fact(n-k));
			printf("%4d",value);
		}	
		printf("\n");
      }
}
int main()
{

	int number;
	printf("Enter rows:");
	scanf("%d",&number);
	pascal(number);
}




