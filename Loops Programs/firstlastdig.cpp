#include<stdio.h>
//int main()
//{
//int num;
//printf("Enter number");
//scanf("%d",&num);
//int first=num;
//int last;
//last = num%10;
//while(first>=10){
//	first=first/10;
//}
//printf("First is %d\n",first);
//printf("Last is %d",last);
//}
int main()
{
	int num;
	printf("enter number:");
	scanf("%d",&num);
	int sec;
	int seclast;
	seclast=(num/10)%10;
	sec=(num/1000)%10;
	printf("second is %d ",sec);
	printf("second last is %d",seclast);
}