#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void random(int arr[] , int n)
{
 srand(time(NULL));	
 printf("System's Numbers Are:\n");
 for(int i =0 ; i< n ; i++)
 {
 	arr[i]=rand()%20; //limit of random number is 20
 
 	printf(" Index %d = %d\n",i,arr[i]); // to view system random numbers
 }
 
}

int search(int arr[] , int n ,int num)
{
	for(int i =0 ; i<n ; i++)
	{
		if(num==arr[i])
		{
			return i;
		}
		 
	}
	return -1;
}

int main(){
	int num; 
	int n[10];
	
	printf("Enter number : ");
	scanf("%d",&num);
	random(n,10);
	int index= search(n,10,num);
	if(index==-1)
	{
	printf("You guess wrong");
	}
	else 
		printf("It is present at %d index",index);
}