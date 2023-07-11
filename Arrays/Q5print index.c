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
	int index;
	for(int i=0 ; i<n ;i++)
	{
		if(maxi < arr[i])
		{
			maxi=arr[i];
			index=i;
		}
	}
	return index;
}
int main()
{
	int num[5];
	enter(num,5);
	int index=findmx( num,5);
	printf("Largest value have  index of %d", index);
}