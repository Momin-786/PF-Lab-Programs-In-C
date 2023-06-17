#include <stdio.h>

void fibo(int n, int a , int b)
{
	if(n>0)

{	
	int c = a + b;
	printf("%d, ",c);
	fibo(n-1, b, c);
	}	
}
int main()
{
	int n;
	int a=0;
	int b=1;
	printf("Enter the num: ");
	scanf("%d", &n);
	printf("0, 1, ");
	fibo(n-2, a , b);
}