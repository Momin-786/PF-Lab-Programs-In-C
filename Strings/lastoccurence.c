#include<stdio.h>
int findindex(char str[] , char substr[]);
int strlength	(char str[]);
int main()
{ char str[100],substr[100];
  int index;
  printf("Enter the string\n");
  gets(str);
  printf("Enter the substring\n");
  gets(substr);
  index=findindex(str,substr);
  if(index==-1)
  printf("Substring not found\n");
  else
  printf("Substring found at index %d\n",index);
  return 0;
}
int strlength(char str[])
{ int i=0;
  while(str[i]!='\0')
  i++;
  return i;
}
int findindex(char str[],char substr[])
{ int i,j;
  int len1=strlength(str);
  int len2=strlength(substr);
  for(i=len1;i>=0;i--)
  { for(j=0;j<len2;j++)
	{ if(str[i+j]!=substr[j])
	  break;
	}
	if(j==len2)
	return i;
  }
  return -1;
}