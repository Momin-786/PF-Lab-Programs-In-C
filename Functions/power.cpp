#include<stdio.h>
int power(int n1,int n2){
	int res=1;
	for(int i=1; i<=n2;i++)
	{
		res=res*n1;
	}
	return res;
}
int main(){
	int num1;
	int num2;
	printf("Enter base of number :");
	scanf("%d",&num1);
		printf("Enter power of number :");
	scanf("%d",&num2);
	int p=power(num1,num2);
	printf("%d",p);
}