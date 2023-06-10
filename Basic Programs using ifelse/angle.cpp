#include <stdio.h>
#include <math.h>

int main()
{
  float x, y, r, theta;
  printf("Enter the x coordinate: ");
  scanf("%f", &x);
  printf("Enter the y coordinate: ");
  scanf("%f", &y);
  r = sqrt(pow(x, 2) + pow(y, 2));
  theta = atan2(y, x) * (180 / 3.14);
  printf("The radius is: %f and the angle is: %f", r, theta);
    return 0;
}