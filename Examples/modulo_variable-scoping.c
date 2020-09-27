//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#define PI 3.14159

//double show_global;

int calc_modulo (double, double);

int main(void) {
  double show_local;

  //show_global = 9;
  //printf("show_global value is %lf\n", show_global);
  int result = pow(2,3);
  result = calc_modulo(4.5, 2.5);
  printf("From main, the result of mod function is %d\n", result);
  printf("%p", &result);
  scanf("%d", &result);
  printf("From main, the value now at the address of the variable result %d\n", result);
  //printf("show_global value is %lf\n", show_global);

  return 0; 
}

int calc_modulo (double num1, double num2){
  int result = (int)num1 % (int)num2;
  //show_local;
  //show_global = 1234857;
  //printf("show_global value is %lf\n", show_global);
  printf("num1 was %lf, num2 was %lf\n", num1, num2);
  printf("num1 was %d, num2 was %d\n", (int)num1, (int)num2);
  printf("The result of modulo is %d\n", result);
  return result;
}

