#include<stdio.h>
void enter(int arr[], int n)
{
	printf("Enter %d numbers: ",n);

	for(int i =0 ; i< n ; i++)
	{
		scanf("%d",&arr[i]);
	}
}
void common(int a[],int b[],int n)
{	printf("Common are : ");
	for(int i=0 ; i<n ; i++)
	{ 
	for(int j=0 ;j<n ;j++)
		if(a[i]==b[j])
		{
			printf("%d , ",b[j]);
		}
	}
}
int main()
{
	int a[5];
	int b[5];
	enter(a,5);
	enter(b,5);
	common(a,b,5);
}