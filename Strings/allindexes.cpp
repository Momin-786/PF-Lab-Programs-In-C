#include<stdio.h>
void findindex(char str[] , char substr[]);
int strlength	(char str[]);
int main()
{ char str[100],substr[100];
  int index;
  printf("Enter the string\n");
  gets(str);
  printf("Enter the substring\n");
  gets(substr);
  findindex(str,substr);
  return 0;
}
int strlength(char str[])
{ int i=0;
  while(str[i]!='\0')
  i++;
  return i;
}
void findindex(char str[],char substr[])
{ int i,j;
int count=0;
  int len1=strlength(str);
  int len2=strlength(substr);
  int index[len2];
  for(i=0;i<len1;i++)
    if(str[i]==substr[0])
  { for(j=0;j<len2;j++)

	{ if(str[i+j]!=substr[j])
	  break;
	}
	if(j==len2)
	{
    index[count]=i;
    count++;
    }
  }
    if(count==0)
    printf("Substring not found\n");
    else
    {
        printf("Substring found at index ");
        for(i=0;i<count;i++)
        printf("%d ",index[i]);
    }
}