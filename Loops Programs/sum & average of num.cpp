#include<stdio.h>
int main()
{
	int sum=0;
	int avg=1;
int num;
int count=1;
while(count<=10)
{
	printf("Enter number:");
	scanf("%d",&num);
	count++;
	sum=num+sum;
	
}
 printf("SUm is %d\n",sum);
 avg=sum/10;
 printf("Average is %d",avg);

}