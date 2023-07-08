#include<stdio.h>
void encrypt(char str[], int shift);
int main()
{
	char str[100];
	int shift;
	printf("Enter message:");
	gets(str);
	printf("Enter shift value:");
	scanf("%d",&shift);
	encrypt(str,shift);
	printf("Encrypted message is \n %s",str);
}
void encrypt(char str[], int shift)
{
	for(int i =0; i<str[i]!='\0';i++)
	{
		char ch = str[i];
		if(ch>='a' && ch<= 'z')
		{
			ch=((ch-'a')+shift)%26+'a';
		}
		else if(ch>='A' && ch<= 'Z')
		{
			ch=((ch-'A')+shift)%26+'A';
		}
		str[i]=ch;
		
	}
}