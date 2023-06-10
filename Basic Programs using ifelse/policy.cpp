#include<stdio.h>
int main()
{
char health;
int age;
char city;
char gender;
char Good;

printf("Enter your age:");
scanf(" %d", &age);
getchar();
printf("Is your health Excellent: ");
scanf(" %c\n", &health);
getchar();
printf("Are you male: ");
scanf(" %c", &gender);
getchar();
printf("Are you live in city? (Yes or No) ");
(" %c", &city);
getchar();




	if( (health== 'Yes') && (age>=25 && age<=35) && (city=='Yes') && (gender=='Male') )
{
	printf("Congrats You should be insured\n");
  printf("Your premium is Rs 4 per thousand\n");
  printf("Your policy maximum amount is 4 lac");
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}