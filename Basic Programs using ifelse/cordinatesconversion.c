/*Write a program that takes two float inputs (x, y) representing the Cartesian coordinates of a 	point in a 2D plane. The program should convert these coordinates to polar coordinates (r, θ) 	and output the radius (r) and angle (θ) in degrees.
Formulas:
a.	Radius: r = sqrt(x^2 + y^2)
b.	Angle: θ = atan2(y, x) * (180 / PI)
Note: You will need to use the sqrt(), atan2(), and other functions from the math.h library. Also, 	be sure to handle different quadrants and edge cases properly.
*/

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

