//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
//unchanging, constant, static PI
//#define PI = 3.14159


int main(void) {
  //time is in 24 hour format
  int num1;
  int num2;
  printf("Enter two numbers separated by a space: ");
  scanf("%d %d", &num1, &num2);
  printf("Enter grade 1: ");
  scanf("%d", &num1);
  printf("Enter grade 2: ");
  scanf("%d", &num2);
  printf("Your numbers were %d and %d", num1, num2);

  double radius;
  //prompt user for input
  printf("Enter radius of circle:");
  //get user input
  scanf("%lf", &radius);
  //calculate circumference from input
  double circumference;
  //C = 2*pi*r
  circumference = 2 * 3.14159 * radius;
  //print results
  printf("Circumference is: %lf", circumference);

  return 0;
}