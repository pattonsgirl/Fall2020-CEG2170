//libraries
//files that we need to include
#include <stdio.h>
#include <math.h>
#include <ctype.h>

//the old way
void divide_nums (double, double);
void divide_nums (double, double, double *);

int main(void) {
  double num1 = 90.5;
  double num2 = 5.2;
  char selection = 'd';
  double result;
  //create a pointer that holds address to result
  double * resultp;
  //store address of result
  resultp = &result;
  //change value of result
  *resultp = 67.98;
  printf("The result of division was: %lf\n", *resultp);
  printf("The result of division was: %lf\n", result);


  switch (selection) {
    case 'd':
      divide_nums(num1, num2, &result);
      printf("The result of division was: %lf\n", *resultp);
      divide_nums(34.7, 67.3, resultp);
      printf("The result of division was: %lf\n", result);
      break;
    //case 'a':
      //call addition function
      //break
    default:
      printf("Poor choice");
      break;
  }

  return 0; 
}

void divide_nums (double digit1, double digit2, double * totalp){
  //double total = digit1 / digit2;
  *totalp = digit1 / digit2;
  //printf("The result of division is: %lf", total);
}

