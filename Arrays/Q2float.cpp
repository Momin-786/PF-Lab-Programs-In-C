#include<stdio.h>
int main()
{
	int n=5;
	float a[n]= {9.3,3.8,5.3,7.8,1.0};
	printf(" Array = [");
	for(int i=0 ; i<n ; i++)
	{
		printf(" %.2f ,", a[i]);
	}
	printf("]");
}