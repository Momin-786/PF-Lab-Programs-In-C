#include<stdio.h>
int gcd(int n1 , int n2)
{	int g;
	int min=(n1<n2)?n1:n2;
	for(int i=1 ; i<=min ; i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			g=i;
		}
	}
	return g;
}
int main(){
	
	int num1,num2;
	printf("enter numbers");
	scanf("%d",&num1);
	scanf("%d",&num2);
	printf("%d",gcd(num1,num2));
}