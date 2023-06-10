#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	  temp=*a;
        *a=*b;
	    *b=temp;	
}

void swap(int *a, int *b);
 int main()
 {
 	int num1;
 	int num2;
 	printf("Enter number:");
 	scanf("%d",&num1);
 	printf("Enter number:");
 	scanf("%d",&num2);
 	printf("Before swap Num one is : %d and Num two is : %d\n",num1,num2);
	swap(&num1,&num2);
    printf("After swap Num one is : %d and Num two is : %d\n",num1,num2);
 	
 }