#include<stdio.h>

void enter(int arr[],int n)
{
	printf("Enter %d Numbers",n);
	for (int i = 0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
}
int seclarge(int arr[] , int n)
{
	int large=arr[0];
	int secondlar= arr[0];
	for(int i =  1; i<n ; i++)
	{
		if(arr[i]> large)
		{	secondlar=large;
			large=arr[i];
		   
		}
		else if(arr[i] > secondlar && arr[i]!=large )
		secondlar=arr[i];
	}
	return secondlar;
}
int main()
{
	int num[5];
	enter(num,5);
	int sec= seclarge(num,5);
	printf("Second large is %d", sec);
	
	
}


