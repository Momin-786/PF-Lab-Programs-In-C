#include<stdio.h>
void modify(char str[]);
int main()
{
	char str[100];
	printf("Enter string:");
	gets(str);
	modify(str);
	printf("Now new string is : %s",str);
}
void modify(char str[])
{
	int length=0;
	while(str[length]!='\0')
	{
		length++;
	}
	if(length>=3)
	{
		if(str[length-3]=='i' && str[length-2]=='n' && str[length-1]=='g')
		{
			str[length++]='l';
			str[length++]='y';
		}
		else 
		{
			str[length++]='i';
			str[length++]='n';
			str[length++]='g';
		}
	}
	str[length]='\0';
}