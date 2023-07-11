# include <stdio.h>
int len(char a[])
{
	int i = 0;
	while (a[i]!='\0'	)
	i++;
	
return i; 
}
main()
{
	char name[20];
	gets(name);
	int additive = 3;
	int alpha=0, digits=0,special=0;
	int words = 0;
	int sentences=0;
	for (int i=0;i<len(name);i++)
	{
		if ((name[i]>=48 && name[i]<=57))
		{
			digits++;
			int x = name[i]+ additive;
			if (x>57)
			{
				name[i]=47+(name[i]+additive)%57;
			}
			else
			name[i]=x;
		}
		else if (name[i]>=65 && name[i]<=90)
		{
			alpha++;
			int x = name[i]+ additive;
			if (x>90)
			{
				name[i]=64+(name[i]+additive)%90;
			}
			else
			name[i]=x;
		 }
		 else if (name[i]>=97 && name[i]<=122)
		{
			alpha++;
			int x = name[i]+ additive;
			if (x>122)
			{
				name[i]=96+(name[i]+additive)%122;
			}
			else
			name[i]=x;
		
		}
		else
		special++;
		if (name[i]==' ' ||name[i]==',')
		words++;
		if (name[i]=='.')
		{
			sentences++;
			
		}
		//printf("%d = %c = %d, ", i,name[i], name[i] );
	}
	printf("\n Ciphered: %s \n",name);
	printf("\n Alphabets are %d\n  digits are %d\n special characters are %d\n  Words are %d\n sentences are %d\n",alpha,digits,special, words+1, sentences);
	
}