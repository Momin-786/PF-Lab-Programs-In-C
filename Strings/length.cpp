#include<stdio.h>
int findlength(char str[]);
int main()
{
	char str[10];
	printf("Enter String:");
	gets(str);
	int length=findlength(str);
	printf("Length of string is %d ",length);
}
int findlength(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}