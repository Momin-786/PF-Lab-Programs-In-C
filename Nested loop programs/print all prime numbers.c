/*Write a program to print all prime numbers from 1 to 300 using while loop without using boolean variable.*/

#include<stdio.h>
int main()
{
int i=1,j=1;
while(i<=300)
{
while(j<=i)
{
if(i%j==0)
break;
j++;
}
if(i==j)


printf("%d\t",i);
i++;
j=1;
}

return 0;
}

