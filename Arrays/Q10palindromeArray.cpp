#include<stdio.h>
void enter(int arr[], int n)
{
	printf("Enter %d numbers: ",n);

	for(int i =0 ; i< n ; i++)
	{
		scanf("%d",&arr[i]);
	}
}
void palindrome(int arr[],int n)
{
	int flag=0;
	for (int i=0 ; i<=n/2 && n!=0 ;i++)
	{
		if(arr[i]==arr[n-i-1])
		flag=1;
		else break;
	}
	if(flag==1)
	{
		printf("Palindrome array");
		
	}
	else printf("Not Palindrome Array");
}
int main ()
{
	int a[5];
	enter(a,5);
	palindrome(a,5);
}
