#include<stdio.h>
int main()
{	int n=5;
	int a[n]= {1,2,3,4,5}; 
	printf("[");
	for(int i=0 ; i<n ; i++)
	{	if(i==4)
	{
		printf("%d ",a[i]);
	}
	else 
		printf(" %d ,",a[i]);
	}
	printf("]");
	
}