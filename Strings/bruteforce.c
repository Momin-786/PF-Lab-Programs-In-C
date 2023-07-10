#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void randpass(char pass[]);
int main()
{   srand(time(0));
    char pass[5];
    randpass(pass);

}
void randpass(char pass[])
{  int length= rand()%5+1;
    printf("Lenght is %d\n",length );
    printf("Password is : ");
     for(int i =0 ; i<length;i++)
{
    pass[i]=rand()%26+'a';
 
    printf("%c",pass[i]);
}
}
// under construction
