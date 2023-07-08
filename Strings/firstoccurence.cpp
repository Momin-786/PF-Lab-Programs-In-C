#include<stdio.h>
int findindex(char str[] , char substr[]);
int main()
{
	char str[100];
	char substr[100];
	printf("Enetr String:");
	gets(str);
	printf("Enetr Substring: ");
	gets(substr);
	int slen=findindex(str , substr);
	if(slen!=-1)
	{
		printf("%s found at %d index", substr,slen);
		
	}
	else printf("Not found");
	
}
int findindex(char str[] , char substr[])
{	int j=0;
	int i= 0;
	
	for(i=0;i<str[i]!='\0';i++)
	{
		for(j=0;j<substr[j]!='\0'; j++)
		{
			if(str[i+j]!=substr[j])
			{	
				break;
			}
		return i;	
		}
	
	}
	return -1;

	
}