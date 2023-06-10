

#include <stdio.h>

int main()
{
  int number, thousand, hunderd, ten, one;
  printf("Enter a number between 1 and 3999: ");
  scanf("%d", &number);
  if (number >= 1 && number <= 3999)
  {
    thousand = number / 1000;
    hunderd = (number % 1000) / 100;
    ten = ((number % 1000) % 100) / 10;
    one = (((number % 1000) % 100) % 10);
    if (thousand == 1)
    {
      printf("M");
    }
    else if (thousand == 2)
    {
      printf("MM");
    }
    else if (thousand == 3)
    {
      printf("MMM");
    }
    if (hunderd == 1)
    {
      printf("C");
    }
    else if (hunderd == 2)
    {
      printf("CC");
    }
    else if (hunderd == 3)
    {
      printf("CCC");
    }
    else if (hunderd == 4)
    {
      printf("CD");
    }
    else if (hunderd == 5)
    {
      printf("D");
    }
    else if (hunderd == 6)
    {
      printf("DC");
    }
    else if (hunderd == 7)
    {
      printf("DCC");
    }
    else if (hunderd == 8)
    {
      printf("DCCC");
    }
    else if (hunderd == 9)
    {
      printf("CM");
    }
    if (ten == 1)
    {
      printf("X");
    }
    else if (ten == 2)
    {
      printf("XX");
    }
    else if (ten == 3)
    {
      printf("XXX");
    }
    else if (ten == 4)
    {
      printf("XL");
    }
    else if (ten == 5)
    {
      printf("L");
    }
    else if (ten == 6)
    {
      printf("LX");
    }
    else if (ten == 7)
    {
      printf("LXX");
    }
    else if (ten == 8)
    {
      printf("LXXX");
    }
    else if (ten == 9)
    {
      printf("XC");
    }
    if (one == 1)
    {
      printf("I");
    }
    else if (one == 2)
    {
      printf("II");
    }
    else if (one == 3)
    {
      printf("III");
    }
    else if (one == 4)
    {
      printf("IV");
    }
    else if (one == 5)
    {
      printf("V");
    }
    else if (one == 6)
    {
      printf("VI");
    }
    else if (one == 7)
    {
      printf("VII");
    }
    else if (one == 8)
    {
      printf("VIII");
    }
    else if (one == 9)
    {
      printf("IX");
    }
  }
  else
  {
    printf("Invalid number");
  }
  return 0;
}
