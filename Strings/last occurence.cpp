#include<stdio.h>
int findindex(char str[],char substr[] )
{	int i=0;
int j=0;
int length=0;
while(str[length]!='\0')
{
	length++;
}

	for(i=length-1 ; i>=0 ; i--)
	{
		for(j=0;j<substr[j]!='\0';j++)
		{	if(str[i+j]!=substr[j])
			{
			break;
			}
				
		}
		return i;
	}
	return -1;
}
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