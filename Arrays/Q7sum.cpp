#include<stdio.h>
int sum(int arr[] , int n)
{
	int s=0;
	printf("Array is : [");
	for(int i =0 ; i<n ; i++)
	{	printf("%d ,",arr[i]);
		s=s+arr[i];
	}
	printf("]\n");
	return s;
}
void enter(int arr[], int n)
{
	printf("Enter %d numbers: ",n);

	for(int i =0 ; i< n ; i++)
	{
		scanf("%d",&arr[i]);
	}

}

int main()
{
	int a[5];
	enter(a , 5);
int s=	sum(a,5);
	printf("Sum is %d",s);
}