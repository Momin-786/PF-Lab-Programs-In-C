#include<stdio.h>
void enter(int arr[],int n)
{
	printf("Enter %d numberss: ",n);
	for(int i =0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
}
int findmx(int arr[], int n)
{
	int maxi= arr[0];
	for(int i=0 ; i<n ;i++)
	{
		if(maxi < arr[i])
		{
			maxi=arr[i];
		}
	}
	return maxi;
}
int main()
{
	int num[5];
	enter(num,5);
	int max=findmx( num,5);
	printf("Largest is %d", max);
}