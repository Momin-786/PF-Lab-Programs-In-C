#include<stdio.h>
int lcm(int n1,int n2)
{
	int max;
	int lCm;
	max=(n1>n2)?n1:n2;
	for(int i=max; i<=n1*n2;i++){
		if(i%n1==0 && i%n2==0)
		{
			lCm=i;
			break;
		}
	}
	return lCm;
}
int main()
{
int num1;
int num2;
scanf("%d",&num1);

scanf("%d",&num2);
printf("%d",lcm(num1,num2));
}