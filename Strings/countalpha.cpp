#include<stdio.h>
int total=0;
void frequency(char str[]);

int main()
{
    char str[100];
    printf("Enter String: ");
    gets(str);
    frequency(str);
    printf("\ntotalt = %d", total);
    return 0;
}

void frequency(char str[])
{

	for(int i=0; str[i] != '\0'; i++)
	{
		int fre = 0;
		for(int j=0; str[j] != '\0'; j++)
		{
			total++;
			if(str[i] == str[j])
				fre++;
		}
		printf("the char %c is %d time\n", str[i], fre);
	}
}
