#include <stdio.h>



int main(void) {
  int num;
  printf("Enter a number between 1 and 3999: ");
  scanf("%d", &num);
  if (num < 1 || num > 3999) {
    printf("Invalid input. Please enter a number between 1 and 3999: ");
    scanf("%d", &num);
  }
  if (num >= 1000) {
    printf("M");
    num = num - 1000;
  }
  if (num >= 900) {
    printf("CM");
    num = num - 900;
  }
  if (num >= 500) {
    printf("D");
    num = num - 500;
  }
  if (num >= 400) {
    printf("CD");
    num = num - 400;
  }
  if (num >= 100) {
    printf("C");
    num = num - 100;
  }
  if (num >= 90) {
    printf("XC");
    num = num - 90;
  }
  if (num >= 50) {
    printf("L");
    num = num - 50;
  }
  if (num >= 40) {
    printf("XL");
    num = num - 40;
  }
  if (num >= 10) {
    printf("X");
    num = num - 10;
  }
  if (num >= 9) {
    printf("IX");
    num = num - 9;
  }
  if (num >= 5) {
    printf("V");
    num = num - 5;
  }
  if (num >= 4) {
    printf("IV");
    num = num - 4;
  }
  if (num >= 1) {
    printf("I");
    num = num - 1;
  }
  printf("\n");
  return 0;
}
