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
	bool chek[256]={false};
	for(int i=0; str[i] != '\0'; i++)
	{	if(chek[str[i]])
			{continue;}
		
		int fre = 0;
		for(int j=0; str[j] != '\0'; j++)
		{
			total++;
			if(str[i] == str[j])
				{
					fre++;
					chek[str[i]] = true;
				}
		}
		printf("the char %c is %d time\n", str[i], fre);
	}
}
