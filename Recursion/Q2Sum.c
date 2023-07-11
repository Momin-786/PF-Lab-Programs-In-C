#include<stdio.h>
int sum(int n);
int main(){
	
	int num;
	printf("Enter Numbers");
	scanf("%d",&num);
	printf("%d",sum(num));
	
}
int sum(int n)
{
	if(n>=1)
	return n+ sum(n-1);
	else 
	return n;
}