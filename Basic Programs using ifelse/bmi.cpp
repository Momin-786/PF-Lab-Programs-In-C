#include<stdio.h>
int main()
{
float weight,height,bmi,feet,inch;
printf("Enter your weight in kg: ");
scanf("%f",&weight);
printf("Enter your height in feet and inches: ");
scanf("%f %f",&feet,&inch);
	height = ((feet*12) + inch) / 39.37;
	printf("Your height is %.3f\n",height);
bmi=weight/(height*height);
printf("Your BMI  is %.2f",bmi);
printf("%.2f\n",bmi);
if(bmi<18.5)
printf("You are underweight");
else if(bmi>=18.5 && bmi<24.9)
printf("You are normal");
else if(bmi>=24.9 && bmi<29.9)
printf("You are overweight");
else if(bmi>=29.9 && bmi<34.9)
printf("You are obese (class 1)");
else if(bmi>=34.9 && bmi<39.9)
printf("You are obese (class 2)");
else if (bmi>=39.9)
printf("You are extreme obese (clas 3)");

return 0;


















}